/*
  This code solves the 404th probelm of leetcode "Sum of Left Leaves"
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
    int solve(TreeNode* root,int count){
        if(root->left!=NULL){
            if(root->left->left==NULL && root->left->right==NULL){
                count+=root->left->val;
            }
            else{
                count=solve(root->left,count);
            }
        }
        if(root->right!=NULL){
            count=solve(root->right,count);
        }
        return(count);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root->left==NULL && root->right==NULL){return(0);}
        return(solve(root,0));
    }
};
