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
pair<int, int> robHelper(TreeNode* node) {
        if (!node) {
            return {0, 0}; 
        }
        auto left = robHelper(node->left);
        auto right = robHelper(node->right);
        int robCurrent = node->val + left.second + right.second;
        int notRobCurrent = max(left.first, left.second) + max(right.first, right.second);
        return {robCurrent, notRobCurrent};
    }
    int rob(TreeNode* root) {
        auto result = robHelper(root);
        return max(result.first, result.second);
    }
};
