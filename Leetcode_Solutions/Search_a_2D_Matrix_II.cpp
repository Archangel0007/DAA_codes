/*
  This code solves the 240th problem on leetcode "Search a 2D Matrix II"
*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix[0].size();
        for (int i=0;i< matrix.size();i++){
            if(target==matrix[i][0]){
                return(true);
            }
            else if(target>matrix[i][0]){
                for(int j=1;j<n;j++){
                    if(target==matrix[i][j]){
                        return(true);
                    }
                    else if(target<matrix[i][j]){
                        break;
                    }
                }
            }
            else{
                break;
            }
        }
        return(false);
    }
};
