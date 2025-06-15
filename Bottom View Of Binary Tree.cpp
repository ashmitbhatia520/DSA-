#include <map>
#include <queue>
#include <vector>
using namespace std;

vector<int> bottomView(TreeNode<int> *root) {
    if (!root) return {};

    map<int, int> mp;
    queue<pair<TreeNode<int> *, int>> q;
    q.push({root, 0});

    while (!q.empty()) {
        TreeNode<int> *node = q.front().first;
        int hd = q.front().second;
        q.pop();
        mp[hd] = node->data;

        if (node->left) q.push({node->left, hd - 1});
        if (node->right) q.push({node->right, hd + 1});
    }

    vector<int> ans;
    for (auto it : mp) {
        ans.push_back(it.second);
    }

    return ans;
}
