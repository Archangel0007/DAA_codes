/*
  This code solves the 164th problem on leetcode "Maximum_gap"
*/

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()==1){
            return(0);
        }
        else if(nums.size()==2){
            return(abs(nums[1]-nums[0]));
        }
        else{
            int x=0;
            sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size()-1;i++){
                x = max(x,abs(nums[i]-nums[i+1]));
            }
            return(x);
        }
        return(0);
    }
};
