/*
  The below given code solves the 46th problem on leetcode "Permutations" 
*/
using namespace std;
class Solution {
public:
    bool check(vector<int>arr,int n){
        for(int i=0;i<arr.size();i++){
            if(arr[i]==n){
                return(false);
            }
        }
        return(true);
    }
vector < vector < int >>var (vector < int > temp, vector < int > & nums, int n, int x) {
        vector < vector < int >> ans;
        vector < vector < int >> ans1;
        if (x != n ) {
            for (int i = 0; i < n; i++) {
                ans1.clear();
                if (check(temp, nums[i])) {
                    temp.push_back(nums[i]);
                    ans1 =var (temp, nums, n, x + 1);
                    temp.pop_back();
                }
                for(int j=0;j<ans1.size();j++){
                    ans.push_back(ans1[j]);
                }
            }
        }
        else {
            ans1.push_back(temp);
            return(ans1);
        }
        
        return (ans);
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        ans=var(temp,nums,nums.size(),0);
        return(ans);
    }
};
