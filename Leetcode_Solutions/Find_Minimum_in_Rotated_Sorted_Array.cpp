/*
  This code solves the 153rd problem on leetcode " Find Minimum in Rotated Sorted Array"
*/
class Solution {
public:
    int findMin(vector<int>& nums) {
        int flag=0;
        int i;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                flag++;
                break;
            }
        }
        if(flag==1){
            return(nums[i+1]);
        }
        else{
            return(nums[0]);
        }
    }
};
