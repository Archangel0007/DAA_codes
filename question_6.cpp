#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> matrixMultiply(const vector<vector<int>>& A, const 
vector<vector<int>>& B) {
 int n = A.size();
 vector<vector<int>> C(n, vector<int>(n, 0));
 if (n == 1) {
 C[0][0] = A[0][0] * B[0][0];
 } 
else {
 int half = n / 2;
 vector<vector<int>> A11(half, vector<int>(half, 0));
 vector<vector<int>> A12(half, vector<int>(half, 0));
 vector<vector<int>> A21(half, vector<int>(half, 0));
 vector<vector<int>> A22(half, vector<int>(half, 0));
 vector<vector<int>> B11(half, vector<int>(half, 0));
 vector<vector<int>> B12(half, vector<int>(half, 0));
 vector<vector<int>> B21(half, vector<int>(half, 0));
 vector<vector<int>> B22(half, vector<int>(half, 0));
 for (int i = 0; i < half; i++) {
 for (int j = 0; j < half; j++) {
 A11[i][j] = A[i][j];
 A12[i][j] = A[i][j + half];
 A21[i][j] = A[i + half][j];
 A22[i][j] = A[i + half][j + half];
 B11[i][j] = B[i][j];
 B12[i][j] = B[i][j + half];
 B21[i][j] = B[i + half][j];
 B22[i][j] = B[i + half][j + half];
 }
 }
 vector<vector<int>> P1 = matrixMultiply(A11, B11);
 vector<vector<int>> P2 = matrixMultiply(A12, B21);
 vector<vector<int>> P3 = matrixMultiply(A11, B12);
 vector<vector<int>> P4 = matrixMultiply(A12, B22);
 vector<vector<int>> P5 = matrixMultiply(A21, B11);
 vector<vector<int>> P6 = matrixMultiply(A22, B21);
 vector<vector<int>> P7 = matrixMultiply(A21, B12);
 vector<vector<int>> P8 = matrixMultiply(A22, B22);
 for (int i = 0; i < half; i++) {
 for (int j = 0; j < half; j++) {
 C[i][j] = P1[i][j] + P2[i][j];
 C[i][j + half] = P3[i][j] + P4[i][j];
 C[i + half][j] = P5[i][j] + P6[i][j];
 C[i + half][j + half] = P7[i][j] + P8[i][j];
 }
 }
 }
 return C;
}
void printMatrix(const vector<vector<int>>& matrix) {
 int n = matrix.size();
 for (int i = 0; i < n; i++) {
 for (int j = 0; j < n; j++) {
 cout << matrix[i][j] << " ";
 }
 cout << endl;
 } }
int main() {
 cout << "Enter the size of the matrix: ";
 int n;
 cin >> n;
 vector<vector<int>> A(n, vector<int>(n, 0));
 vector<vector<int>> B(n, vector<int>(n, 0));
 cout << "Enter elements of matrix A:" << endl;
 for (int i = 0; i < n; i++) {
 for (int j = 0; j < n; j++) {
 cin >> A[i][j];
 }
 }
 cout << "Enter elements of matrix B:" << endl;
 for (int i = 0; i < n; i++) {
 for (int j = 0; j < n; j++) {
 cin >> B[i][j];
 }
 }
 vector<vector<int>> result = matrixMultiply(A, B);
 cout << "Product of matrices A and B:" << endl;
 printMatrix(result);
 return 0;
}