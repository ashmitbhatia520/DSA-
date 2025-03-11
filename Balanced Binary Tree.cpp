class Solution {
public:
int height(TreeNode* root){
    if(!root || (!root->left && !root->right)) return 0;
    return 1+max(height(root->left),height(root->right));
}
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int l = height(root->left);
        if(root->left!=NULL) l++;
        int r = height(root->right);
        if(root->right!=NULL) r++;
        int d = l-r;
        if(d<0) d = -d;
        if(d>1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
