/*
  This code solves the 108th problem of leetcode "Convert Sorted Array to Binary Search Tree"
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
    TreeNode* solve(vector<int>& nums,int i,int j){
        if(i>j){
            return(nullptr);}
        int m=(i+j)/2;
        struct TreeNode* node = new TreeNode(nums[m]);
        node->left=NULL;
        node->right=NULL;
        if(i!=m){
            node->left=solve(nums,i,m-1);
            cout<<nums[m]<<'\n';
        }
        if(j!=m){
            node->right=solve(nums,m+1,j);
        }
        return(node);
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return(solve(nums,0,nums.size()-1));
    }
};
