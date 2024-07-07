/*
  This code solves the 724th problem on leetcode "Find Pivot Index"
*/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum=0,rsum=0;
        if(nums.size()==1){return 0;}

        for(int i=1;i<nums.size();i++){
            rsum+=nums[i];
        }
        for(int i=1;i<nums.size();i++){
            if(lsum==rsum){
                return(i-1);
            }
            lsum+=nums[i-1];
            rsum-=nums[i];
            if(lsum==rsum){
                return(i);
            }
            cout<<lsum<<" "<<rsum<<'\n';
            
        }
        return(-1);
    }
};
