/*
  This question solves the 96th probelm on leetcode "Unique Binary Search Trees"
*/

class Solution {
public:
    int numTrees(int n) {
        vector<int>dp(n+2,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n+1;i++){
            int temp=0;
            for(int j=0;j<=i;j++){
                temp+=dp[j]*dp[i-j];
            }
            dp[i]=temp;
        }
        return(dp[dp.size()-1]);
    }
};
