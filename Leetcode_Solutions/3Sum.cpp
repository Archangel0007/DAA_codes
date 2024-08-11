/*
  This code solves the 15th problem on leetcode "3Sum"
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<vector<int>>ans;
        int start,end;
        for(int i=0;i<nums.size()-2;i++){
            start = i+1;
            end=nums.size()-1;
            while(start<end){
                int sum=nums[i]+nums[start]+nums[end];
                if(sum==0){
                    s.insert({nums[i],nums[start],nums[end]});
                    start++;
                    end--;
                }
                else if(sum>0){
                    end--;
                }
                else if(sum<0){
                    start++;
                }
            }
        }
        for(auto x:s){
            ans.push_back(x);
        }
        return(ans);
    }
};
