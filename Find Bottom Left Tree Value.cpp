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
vector<vector<int>> level(TreeNode* root){
    vector<vector<int>> result;
    queue<TreeNode*> q;
    if(!root) return result;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            TreeNode* node = q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            ans.push_back(node->val);
        }
        result.push_back(ans);
    }
    return result;
}
    int findBottomLeftValue(TreeNode* root) {
        vector<vector<int>> pre = level(root);
        int n = pre.size();
        vector<int> arr = pre[n-1];
        return arr[0];
    }
};
