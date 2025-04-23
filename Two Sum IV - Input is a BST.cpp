class Solution {
public:
void inorder(TreeNode* root,vector<int>& ans){
    if(!root) return;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
    bool findTarget(TreeNode* root, int k) {
    vector<int> ans;
    inorder(root, ans);
    unordered_set<int> seen;
    for (int num : ans) {
        if (seen.count(k - num)) {
            return true;
        }
        seen.insert(num);
    }
    return false;
    }
};
