/*
  This code solves the 199th problem of leetcode "Binary Tree Right Side View"
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
    int depth(TreeNode* root, int d) {
        if (!root) return d;
        int l = depth(root->left, d + 1);
        int r = depth(root->right, d + 1);
        return max(l, r);
    }
    vector<int> solve(TreeNode* root,int d,vector<int> ans){
        if (!root){
            return(ans);
        } 
        ans[d] =root->val;
        ans = solve(root->left, d + 1,ans);
        ans = solve(root->right, d + 1,ans);
        return ans;
    }
    vector<int> rightSideView(TreeNode* root) {
        int depth_val = depth(root, 0);
        vector<int> arr(depth_val, INT_MIN);
        arr = solve(root,0,arr);
        return arr;
    }
};
