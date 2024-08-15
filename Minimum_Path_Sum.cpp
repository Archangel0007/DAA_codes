/*
  This code solves the 64th problem on leetcode "Minimum Path Sum"
*/

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size() + 1, vector<int>(grid[0].size() + 1, 0));
        for(int i=1;i<dp.size();i++){
            dp[i][1]=grid[i-1][0]+dp[i-1][1];
        }
        for(int j=1;j<dp[0].size();j++){
            dp[1][j]=grid[0][j-1]+dp[1][j-1];
        }
        for(int i=2;i<dp.size();i++){
            for(int j=2;j<dp[0].size();j++){
                dp[i][j]=grid[i-1][j-1]+min(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[dp.size()-1][dp[0].size()-1];
    }
};
