#include <iostream>
#include <vector>
using namespace std;
long long mergeAndCountInversions(vector<int>& arr, vector<int>& temp, int left, int mid, 
int right) {
 int i = left;
 int j = mid + 1;
 int k = left;
 long long inversions = 0;
 while (i <= mid && j <= right) {
 if (arr[i] <= arr[j]) {
 temp[k] = arr[i];
 i++;
 } else {
 temp[k] = arr[j];
 inversions += mid - i + 1;
 j++;
 }
 k++;
 }
 while (i <= mid) {
 temp[k] = arr[i];
 i++;
 k++;
 }
 while (j <= right) {
 temp[k] = arr[j];
 j++;
 k++;
 }
 for (int idx = left; idx <= right; idx++) {
 arr[idx] = temp[idx];
 }
 return inversions;
}
long long mergeSortAndCountInversions(vector<int>& arr, vector<int>& temp, int left, int 
right) {
 long long inversions = 0;
 if (left < right) {
 int mid = left + (right - left) / 2;
 inversions += mergeSortAndCountInversions(arr, temp, left, mid);
 inversions += mergeSortAndCountInversions(arr, temp, mid + 1, right);
 inversions += mergeAndCountInversions(arr, temp, left, mid, right);
 }
 return inversions;
}
long long countInversions(vector<int>& arr) {
 int size = arr.size();
 vector<int> temp(size);
 return mergeSortAndCountInversions(arr, temp, 0, size - 1);
}
int main() {
 vector<int> arr = {2, 3, 8, 6, 1};
 cout << "Original array: ";
 for (int num : arr) {
 cout << num << " ";
 }
 cout << endl;
 long long inversions = countInversions(arr);
 cout << "Number of inversions: " << inversions << endl;
 return 0;
}