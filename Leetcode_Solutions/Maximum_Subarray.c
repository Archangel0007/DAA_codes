/*
  The code given below solves the 53rd problem on leetcode, "Maximum Subarray"
*/
#include<limits.h>
int maxSubArray(int* nums, int n){
    int maxuntilnow=0;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        maxuntilnow+=nums[i];
        if(maxuntilnow<0){
            maxuntilnow=0;
        }
        if(maxuntilnow>max){
            max=maxuntilnow;
        }
    }
    if(max==0){
        max=INT_MIN;
        for(int i=0;i<n;i++){
            if(max<nums[i]){
                max=nums[i];
            }
        }
        return(max);
    }
    return(max);

}
