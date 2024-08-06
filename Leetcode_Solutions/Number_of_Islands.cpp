/*
  This code solves the 200th problem on leetcode "Number of Islands"
*/

class Solution {
public:
    void solve(vector<vector<char>>&mat ,int i, int j){
        mat[i][j]='0';
        if(i>0){
            if(mat[i-1][j]=='1'){
                solve(mat,i-1,j);
            }
        }
        if(j>0){
            if(mat[i][j-1]=='1'){
                solve(mat,i,j-1);
            }
        }
        if(i<mat.size()-1){
            if(mat[i+1][j]=='1'){
                solve(mat,i+1,j);
            }
        }
        if(j<mat[0].size()-1){
            if(mat[i][j+1]=='1'){
                solve(mat,i,j+1);
            }
        }
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    solve(grid,i,j);
                    ans++;
                }
            }
        }
        return (ans);
    }
};
