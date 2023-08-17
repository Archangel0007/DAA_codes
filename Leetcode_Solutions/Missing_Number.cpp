/*
  The given code solves the 268th problem of leetcode "Missing Number"
*/
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<size(nums)+1;i++){
            ans.push_back(0);
        }
        for(int i=0;i<size(nums);i++){
            ans[nums[i]]=1;
        }
        for(int i=0;i<size(nums)+1;i++){
            if(ans[i]==0){
                return(i);
            }
        }
        return(-1);
    }
};
