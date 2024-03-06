/*
    This code solves the 152nd problem of leetcode "Maximum Product Subarray"
*/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.size()==1){
            return(nums[0]);
        }
        else{
            int j=0,i=nums.size()-1;
            int product=1,out=0;
            while(j<nums.size()){
                product=product*nums[j];
                
                if(out<product){
                    out=product;
                }
                if(product==0){product=1;}
                j++;
            }
            product=1;
            while(i>0){
                product=product*nums[i];
                
                if(out<product){
                    out=product;
                }
                if(product==0){product=1;}
                i--;
            }
            return(out);
        }
        return(0);
        
    }
};
