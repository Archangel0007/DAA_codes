/*
  This code solves the 1493rd problem of leetcode "Longest Subarray of 1's After Deleting One Element"
*/
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ptr=0,subptr=0;
        int flag=0,flag2=0;
        int ans=0,sum=0;
        while(ptr<nums.size()){
            if(flag==0){
                if(nums[ptr]==0){
                    flag=0;
                    flag2++;
                }
                else if(nums[ptr]==1){
                    sum++;
                    flag=1;
                }
            }
            else if(flag==1){
                if(nums[ptr]==0){
                    flag=2;
                    subptr=ptr;
                    flag2++;
                }
                else if(nums[ptr]==1){
                    sum++;
                }
            }
            else if(flag==2){
                if(nums[ptr]==1){
                    sum++;
                }
                else if(nums[ptr]==0){
                    flag=0;
                    flag2++;
                    if(sum>ans){
                        ans=sum;
                    }
                    sum=0;
                    ptr=subptr;
                }
            }
            ptr++;
        }
        if(sum>ans){
            ans=sum;
        }
        if(flag2==0){
            ans--;
        }
        return(ans);
    }
};
