/*
  This code solves the 94th problem of leetcode "Binary Tree Inorder Traversal"
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
    vector<int> solve(TreeNode* root, vector<int> &nums){
        if(root==NULL){
            return(nums);
        }
        else{
            nums=solve(root->left,nums);
            nums.push_back(root->val);
            nums=solve(root->right,nums);
        }
        return(nums);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        return(solve(root,ans));

    }
};
