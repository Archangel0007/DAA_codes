/*
  This code solves the 111th problem of leetcode "Minimum depth of a binary tree"
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
    int Min(int a,int b){
        if(a>b){
            return(b);
        }
        return(a);
    }
    int min(TreeNode* root,int count){
        int left=INT_MAX,right=INT_MAX;
        if(root->left==NULL && root->right==NULL){
            return(count);
        }
        if(root->left!=NULL){
            left=min(root->left,count+1);
        }        
        if(root->right!=NULL){
            right=min(root->right,count+1);
        }
        return(Min(left,right));
    }
    int minDepth(TreeNode* root) {
        if(root==NULL){return(0);}
        return(min(root,1));
    }
};
