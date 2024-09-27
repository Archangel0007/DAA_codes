/*
  This code solves the 72nd problem on leetcode "Minimum distance"
*/

class Solution {
public:
    int min(int a,int b){
        if(a>b){
            return(b);
        }
        return(a);
    }
    void print(vector<vector<int>>mat){
        //cout<<mat[0].size();
        for(int i=0;i<mat.size();i++){
            cout<<'[';
            for(int j=0; j<mat[0].size();j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<']';
            cout<<'\n';
        }
    }
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>>dp;
        vector<int>temp;
        for(int i=0;i <=n ; i++){
            temp.push_back(0);
        }
        for(int i = 0;i <= m; i++){
            dp.push_back(temp);
        }

        for(int i = 0; i<=m;i++){
            dp[i][0]=i;
        }
        for(int i = 0; i<=n;i++){
            dp[0][i]=i;
        }
        cout<<n<<" "<<m<<'\n';
        for(int i = 1 ; i<=n ; i++){
            for(int j = 1 ; j<=m ; j++){
                if(word1[i-1] == word2[j-1]){
                    dp[j][i] = min(min(dp[j-1][i-1],dp[j-1][i]+1),dp[j][i-1]+1);
                }
                else{
                    
                    dp[j][i] = min(min(dp[j-1][i-1]+1,dp[j-1][i]+1),dp[j][i-1]+1);
                }
                //cout<<i<<" "<<j<<" "<<word1[i-1]<<" "<<word2[j-1]<<"\n";
                //print(dp);
            }
        }
        return(dp[m][n]);
    }
};
