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
 TreeNode* buildTreeHelper(std::vector<int>& inorder, std::vector<int>& postorder, int Start, int End, int& postIndex, std::unordered_map<int, int>& inorderIndexMap) {
        if (Start > End) return nullptr;
        int rootVal = postorder[postIndex--];
        TreeNode* root = new TreeNode(rootVal);
        int Index = inorderIndexMap[rootVal];
        root->right = buildTreeHelper(inorder, postorder, Index + 1, End, postIndex, inorderIndexMap);
        root->left = buildTreeHelper(inorder, postorder, Start, Index - 1, postIndex, inorderIndexMap);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postIndex = postorder.size() - 1;
        unordered_map<int, int> inorderIndexMap;
        for (int i = 0; i < inorder.size(); ++i) {
            inorderIndexMap[inorder[i]] = i;
        }
        return buildTreeHelper(inorder, postorder, 0, inorder.size() - 1, postIndex, inorderIndexMap);
    }
};
