/*
  The give code solves the 45th problem of leet code "Jump Game II"
*/
class Solution {
public:
    int val(vector<int>& nums,int pos,int min){
        cout<<pos<<'\t';
        if(pos==nums.size()-1){
            return(min);
        }
        else if(pos+nums[pos]>=nums.size()-1){
            return(min+1);
        }
        else{
            int jumppos;
            int jumpval=INT_MIN;
            for(int i=pos+1;i<pos+nums[pos]+1;i++){
                if(i+nums[i]>=nums.size()){
                    jumppos=i;
                    break;
                }
                if(i+nums[i]>jumpval){
                    jumpval=i+nums[i];
                    jumppos=i;
                }
            }
            int ans=val(nums,jumppos,min+1);
            return(ans);
        }
            
    }
    int jump(vector<int>& nums) {
        int ans=val(nums,0,0);
        return(ans);
    }
};
