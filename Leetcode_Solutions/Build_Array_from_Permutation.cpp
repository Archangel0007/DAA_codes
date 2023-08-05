/*
  the given code solves the 1920th problem "Build Array from Permutation"
*/
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[nums[i]]);
        }
        return(ans);
    }
};
