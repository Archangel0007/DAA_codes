/*
  The given code solves the 257th problem on leetcode "Binary Tree Paths"
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<string> solve(TreeNode* root,string val,vector<string> ans){
      if(root->left==NULL && root->right==NULL){
        val+=to_string(root->val);
        ans.push_back(val);
      }
      else if(root->left==NULL){
        val+=to_string(root->val)+"->";
        ans=solve(root->right ,val,ans);
      }
      else if(root->right==NULL){
        val+=to_string(root->val)+"->";
        ans=solve(root->left ,val,ans);
      }
      else{
        val+=to_string(root->val)+"->";
        ans=solve(root->left,val,ans);
        ans=solve(root->right,val,ans);
      }
      return(ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        ans=solve(root,"",ans);
        return(ans);
    }
};
