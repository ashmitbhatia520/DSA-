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
    void dfs(TreeNode* root, unordered_map<int, int>& freqMap, int& maxFreq) {
        if (!root) return;

        freqMap[root->val]++;
        maxFreq = max(maxFreq, freqMap[root->val]);

        dfs(root->left, freqMap, maxFreq);
        dfs(root->right, freqMap, maxFreq);
    }

    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> freqMap;
        int maxFreq = 0;

        dfs(root, freqMap, maxFreq);

        vector<int> modes;
        for (auto& [val, freq] : freqMap) {
            if (freq == maxFreq)
                modes.push_back(val);
        }

        return modes;
    }
};
