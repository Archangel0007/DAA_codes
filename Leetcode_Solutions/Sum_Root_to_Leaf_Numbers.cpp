/*
  This code solves the 129th problem on leetcode "Sum Root to Leaf Numbers"
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
    int solve(TreeNode* root,int sum){
        if(root==NULL){
            return(sum);
        }
        else{
            sum=sum*10+root->val;
            if(root->left==NULL && root->right==NULL){
                sum=sum;
            }
            else if(root->left==NULL){
                sum = solve(root->right,sum);
            }
            else if(root->right==NULL){
                sum = solve(root->left,sum);
            }
            else{
                int a=solve(root->left,sum);
                int b=solve(root->right,sum);
                sum=a+b;
            }
        }
        return(sum);
    }
    int sumNumbers(TreeNode* root) {
        return(solve(root,0));
    }
};
