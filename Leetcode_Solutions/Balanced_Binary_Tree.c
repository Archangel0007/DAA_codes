/*
  This code solves the 110th problem of leetcode "Balanced Binary Tree"
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int a,int b){
    if(a>b){return(a);}
    return(b);
}
int depth(struct TreeNode* root, int count){
    int left=0;
    int right=0;
    if(root->left==NULL && root->right==NULL){return(count);}
    if(root->left!=NULL){
        left+=depth(root->left,count+1);
    }
    if(root->right!=NULL){
        right+=depth(root->right,count+1);
    }
    printf("%d %d\n",left,right);
    return(max(left,right));
}
bool balance(struct TreeNode* root){
    int left=0;
    int right=0;
    if(root->left!=NULL){
        left=depth(root->left,1);
    }
    if(root->right!=NULL){
        right=depth(root->right,1);
    }
    if(left-right==1 || left-right==-1 || left-right==0 ){
        return(true);
    }
    return(false);
}
bool isBalanced(struct TreeNode* root){
    if(root==NULL){return(true);}
    bool left=true,right=true;
    printf("%d",root->val);
    if(!balance(root)){return(false);}
    if(root->left!=NULL){
        left=balance(root->left);
        left=left & isBalanced(root->left);
    }
    if(root->right!=NULL){
        right=balance(root->right);
        right=right & isBalanced(root->right);
    }
    if(right && left){
        return(true);
    }
    return(false);
}
