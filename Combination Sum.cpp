class Solution {
public:
void gets(vector<int>& candidates, int idx, int tar, vector<vector<int>>& ans, vector<int>& com) {
    if (tar < 0) {
        return;
    }
    if (tar == 0) {
        ans.push_back(com);
        return;
    }
    if (idx == candidates.size()) {
        return;
    }
    
    com.push_back(candidates[idx]);
    gets(candidates, idx, tar - candidates[idx], ans, com);
    com.pop_back();
    gets(candidates, idx + 1, tar, ans, com);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans; 
    vector<int> com;
    gets(candidates, 0, target, ans, com);
    return ans;
}
};
