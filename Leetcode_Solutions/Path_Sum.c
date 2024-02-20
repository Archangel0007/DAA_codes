/*
  The given code solves the 112th problem on leetcode "Path-Sum"
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool solve(struct TreeNode* root,int target,int sum){
    if(true){
        sum+=root->val;
        printf("%d",sum);
        if(sum==target && root->left==NULL && root->right==NULL){return(true);}
        bool L=false,R=false;
        if(root->left!=NULL){
            L=solve(root->left,target,sum);
        }
        if(root->right!=NULL){
            R=solve(root->right,target,sum);
        }
        return(L | R);
    }
    return(false);
}
bool hasPathSum(struct TreeNode* root, int target) {
    if(root==NULL){return(false);}
    return(solve(root,target,0));
}
