/*
  This code solves the 62nd problem on leetcode "Unique Paths"
*/
class Solution {
public:
    int paths(int m,int n){
        int dp[m][n];
        for(int i=0, j=0;j<n;j++) dp[i][j]=1;
        for(int j=0, i=0;i<m;i++) dp[i][j]=1;
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++) dp[i][j]=dp[i-1][j] + dp[i][j-1];
        }
        return dp[m-1][n-1];
    }
    int uniquePaths(int m, int n) {
        return(paths(m,n));
    }
};

/*
  Secondary Solution using recursion
*/

class Solution {
public:
    int paths(int m,int n,int i,int j,int count){
        if(i==m-1 && j==n-1){
            return(count+1);
        }
        else{
            int temp=0;
            if(i<m-1){
                temp+=paths(m,n,i+1,j,count);
            }
            if(j<n-1){
                temp+=paths(m,n,i,j+1,count);
            }
            return(temp);
        }
    }
    int uniquePaths(int m, int n) {
        int ans=paths(m,n,0,0,0);
        return(ans);
    }
};
