/*
  The given code solves the 100th problem on leetcode "Same tree"
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
    string inorder(TreeNode* root,string ans){
        if(root==NULL){
            return(ans+" ");
        }
        else{
            ans+=inorder(root->left,ans);
            ans+=to_string(root->val);
            ans+=inorder(root->right,ans);
        }
        return(ans);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(inorder(p,"")==inorder(q,"")){
            return(true);
        }
        return(false);
    }
};
/*
  One more solution using Recursion
*/
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return(true);
        }
        else if(p!=NULL && q!=NULL){
            return(p->val==q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
        }
        else{
            return(false);
        }
    }
};
