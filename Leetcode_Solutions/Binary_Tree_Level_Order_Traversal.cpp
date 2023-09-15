/*
  The given code solves the 102nd problem on leetcode "Binary Tree Level Order Traversal"
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
    int max(int a,int b){
        if(a>b){return(a);}
        return(b);
    }
    int depth(TreeNode* root,int count){
        if(root->left==NULL && root->right==NULL){return(count);}
        else{
            int left,right;
            if(root->left!=NULL){
                left=depth(root->left,count+1);
            }
            if(root->right!=NULL){
                right=depth(root->right,count+1);
            }
            return(max(left,right));
        }
        return(0);
    }
    vector<vector<int>> solve(TreeNode* root,int level,vector<vector<int>> ans){
        ans[level].push_back(root->val);
        if(root->left!=NULL){
            ans=solve(root->left,level+1,ans);
        }
        if(root->right!=NULL){
            ans=solve(root->right,level+1,ans);
        }
        return(ans);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){return(ans);}
        int d=depth(root,1);
        for(int i=0;i<d;i++){
            vector<int>temp;
            ans.push_back(temp);
        }
        return(solve(root,0,ans));
    }
};
