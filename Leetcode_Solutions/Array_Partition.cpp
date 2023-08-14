/*
  This code solves the 561st problem of leetcode "Array Partition"
*/
class Solution {
public:
    int min(int a,int b){
        if(a<b){return(a);}
        return(b);
    }
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int temp=0;
        for(int i=0;i<nums.size();i+=2){
            temp+=min(nums[i],nums[i+1]);  
        }
        return(temp);
    }
};
