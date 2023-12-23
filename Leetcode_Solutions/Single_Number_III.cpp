/*
  This code solves the 260th problem of leetcode "Single Number III"
*/
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size()==2){
            return(nums);
        }
        sort(nums.begin(),nums.end(),greater<int>());
        int p=nums.size()-1;
        vector<int>ans;
        while(nums.size()>=2){
            if(nums[p]==nums[p-1]){
                nums.pop_back();
                nums.pop_back();
                p-=2;
            }
            else{
                ans.push_back(nums[p]);
                nums.pop_back();
                p--;
            }
        }
        if(ans.size()==2){
            return(ans);
        }
        if(nums.size()==1){
            nums.push_back(ans[0]);
        }
        return(nums);
    }
};
