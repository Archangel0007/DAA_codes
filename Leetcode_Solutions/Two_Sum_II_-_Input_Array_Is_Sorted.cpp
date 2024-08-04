/*
  This code solves the 167th problem of leetcode "Two Sum II - Input Array Is Sorted"
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        vector<int>ans;
        int i=0,j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]==t){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            else if(nums[i]+nums[j]>t){
                j--;
            }
            else{
                i++;
            }
        }
        return(ans);
    }
};
