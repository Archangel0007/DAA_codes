/*
  This file contains the solution for the 238th problem "Product of array except self"
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        vector<int>ans;
        int flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                flag++;
            }
            else{
                product*=nums[i];
            }            
        }
        if(flag==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    ans.push_back(product);
                }
                else{
                    ans.push_back(0);
                }
            }
        }
        else if(flag>1){
            for(int i=0;i<nums.size();i++){
                ans.push_back(0);
            }
        }
        else{
            for(int i=0;i<nums.size();i++){
                int x=product/nums[i];
                ans.push_back(x);
            }
        }        
        return(ans);
    }
};
