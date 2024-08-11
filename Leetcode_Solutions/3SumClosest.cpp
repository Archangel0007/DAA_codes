/*
  This code solves the 16th problem on leetcode "3SumClosest"
*/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        int min=INT_MAX;
        for(int i=0;i<nums.size()-2;i++){
            int start=i+1;
            int end=nums.size()-1;
            while(start<end){
                int sum=nums[i]+nums[start]+nums[end];
                if(sum>target){
                    end--;
                }
                else if(sum<target){
                    start++;
                }
                else{
                    return(sum);
                }
                if(abs(sum-target)<ans){
                    min=sum;
                    ans=abs(sum-target);
                }
            }
        }
        return(min);
    }
};
