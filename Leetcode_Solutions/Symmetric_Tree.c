/*
  The given code solves the 101th problem of leetcode "Symmetric Tree"
*/
  
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool sym(struct TreeNode* l,struct TreeNode* r){
    if(l->val==r->val){
        if(r->right==NULL && r->left==NULL && l->right==NULL && l->left==NULL){
            return(true);
        }
        else if(r->right==NULL && l->left==NULL && r->left!=NULL && l->right!=NULL){
            return(sym(l->right,r->left));
        }
        else if(r->left==NULL && l->right==NULL && r->right!=NULL && l->left!=NULL){
            return(sym(l->left,r->right));
        }
        else if(r->right!=NULL && r->left!=NULL && l->right!=NULL && l->left!=NULL){
            return(sym(l->right,r->left) && sym(l->left,r->right));
        }
        else{
            return(false);
        }
    }
    return(false);
}
bool isSymmetric(struct TreeNode* root){
    if(root->left==NULL && root->right==NULL){
        return(true);
    }
    else if(root->left==NULL){
        return(false);
    }
    else if(root->right==NULL){
        return(false);
    }
    else{
        return(sym(root->left,root->right));
    }
    return(false);
}
