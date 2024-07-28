/*
  This code solves the 130th problem on leetcode "Surrounded Regions"
*/

class Solution {
public:
void bfs(vector<vector<char>>& mat,int i,int j){
        mat[i][j]='X';
        int n=mat.size();
        int m=mat[0].size();
        if(i<n-1){
            if(mat[i+1][j]=='O' ){
                bfs(mat,i+1,j);
            }
        }
        if(i>0){
            if(mat[i-1][j]=='O'){

                bfs(mat,i-1,j);
            }
        }
        if(j<m-1){
            if(mat[i][j+1]=='O'){
                bfs(mat,i,j+1);
            }
        }
        if(j>0){
            if(mat[i][j-1]=='O'){
                bfs(mat,i,j-1);
            }
        }
        
    }
    bool dfs(vector<vector<char>>& mat,vector<vector<int>>& vis,int i,int j){
        if(i==0 || i==mat.size()-1 || j==0 || j==mat[0].size()-1){
            return(false);
        }
        else{
            int n=mat.size();
            int m=mat[0].size();
            bool a=true,b=true,c=true,d=true;
            if(i<n-1){
                if(mat[i+1][j]=='O' && vis[i+1][j]==0){
                    vis[i+1][j]=1;
                    a=dfs(mat,vis,i+1,j);
                }
            }
            if(i>0){
                if(mat[i-1][j]=='O' && vis[i-1][j]==0){
                    vis[i-1][j]=1;
                    b=dfs(mat,vis,i-1,j);
                }
            }
            if(j<m-1){
                if(mat[i][j+1]=='O' && vis[i][j+1]==0){
                    vis[i][j+1]=1;
                    c=dfs(mat,vis,i,j+1);
                }
            }
            if(j>0){
                if(mat[i][j-1]=='O' && vis[i][j-1]==0){
                    vis[i][j-1]=1;
                    d=dfs(mat,vis,i,j-1);
                }
            }
            return(a & b & c & d);
        }
        return(false);
    }
    void solve(vector<vector<char>>& board) {
        int count=0;
        vector<vector<int>>vis(board.size(),vector<int>(board[0].size(),0));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='X'){
                    vis[i][j]=1;
                }
            }
        }
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='O' && vis[i][j]==0){
                    if(dfs(board,vis,i,j)){
                        bfs(board,i,j);
                    }
                }
            }
        }
        return;
    }
};
