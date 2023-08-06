/*
  The given code solves the 39th problem of leetcode "Combination Sum"
*/
class Solution {
public:
    vector<vector<int>> SUM(vector<int>& candidates ,int sum,int target,vector<vector<int>> ans,vector<int>element,int index){
        if(sum==target){
            ans.push_back(element);
        }
        else if(sum>target){return(ans);}
        else{
            for(int i=index;i<candidates.size();i++){
                element.push_back(candidates[i]);
                sum+=candidates[i];
                ans=SUM(candidates,sum,target,ans,element,i);
                sum-=candidates[i];
                element.pop_back();
            }
        }
        return(ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>element;
        vector<vector<int>>ans;
        ans=SUM(candidates,0,target,ans,element,0);
        return(ans);
    }
};
