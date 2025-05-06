class Solution {
public:
int search(const vector<int>& inorder, int start, int end, int curr) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == curr) {
            return i;
        }
    }
    return -1;
}

TreeNode* bs(const vector<int>& preorder, const vector<int>& inorder, int start, int end, int& idx) {
    if (start > end) return NULL;

    int curr = preorder[idx++];
    TreeNode* node = new TreeNode(curr); 

    if (start == end) {
        return node;
    }

    int pos = search(inorder, start, end, curr);
    node->left = bs(preorder, inorder, start, pos - 1, idx);
    node->right = bs(preorder, inorder, pos + 1, end, idx);
    return node;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int idx = 0;
    return bs(preorder, inorder, 0, inorder.size() - 1, idx);
}
};
