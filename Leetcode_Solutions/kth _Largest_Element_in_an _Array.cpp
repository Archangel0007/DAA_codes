/*
  This code solves the 215th problem on leetcode "Kth Largest Element in an Array"
*/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        return(nums[nums.size()-k]);
    }
};
