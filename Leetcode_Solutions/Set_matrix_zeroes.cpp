/*
  This code solve the 73rd problem on leetcode "set_matrix_zeroes"
*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        vector<int>rows;
        vector<int>cols;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }
        for(int i=0 ; i<rows.size();i++){
            for(int j=0;j<mat[0].size();j++){
                mat[rows[i]][j]=0;
            }
        }
        for(int i=0;i<cols.size();i++){
            for(int j=0;j<mat.size();j++){
                mat[j][cols[i]]=0;
            }
        }
    }
};
