/*
  This code solves the 54th problem of leetcode "Spiral_Matrix"
*/
class Solution {
    public: vector < int > spiralOrder(vector < vector < int >> & matrix) {
        vector < int > ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int m0 = 0;
        int n0 = 0;
        int arr1[4] = {0,1,0,-1};
        int arr2[4] = {1,0,-1,0};
        int i = 0, j = 0, pointer = 0;
        while (m != m0 && n != n0) {
            cout << matrix[i][j] << endl;
            ans.push_back(matrix[i][j]);
            if (pointer % 4 < 2) {
                while (j < n - 1) {
                    i += arr1[pointer % 4];
                    j += arr2[pointer % 4];
                    cout << matrix[i][j] << endl;
                    ans.push_back(matrix[i][j]);
                }
                //cout<<"Row "<<pointer;
                pointer++;
                n0++;
                while (i < m - 1) {

                    i += arr1[pointer % 4];
                    j += arr2[pointer % 4];
                    cout << matrix[i][j] << endl;
                    ans.push_back(matrix[i][j]);
                }
                
                pointer++;
                m--;
            }
            else{
                while (j > n0-1) {
                    i += arr1[pointer % 4];
                    j += arr2[pointer % 4];
                    cout << matrix[i][j] << endl;
                    ans.push_back(matrix[i][j]);
                }
                //cout << i << j << endl;
                pointer++;
                n--;
                while (i > m0+1 ) {  
                    i += arr1[pointer % 4];
                    j += arr2[pointer % 4];
                    cout << matrix[i][j] << endl;
                    ans.push_back(matrix[i][j]);
                }
                pointer++;
                m0++;
            }
            //cout << i << j << endl;
            i += arr1[pointer % 4];
            j += arr2[pointer % 4];
            //cout<<"m->"<<m<<'\n'<<"n->"<<n<<'\n'<<"m0->"<<m0<<'\n'<<"n0->"<<n0<<'\n';
        }
        return (ans);
    }
};
