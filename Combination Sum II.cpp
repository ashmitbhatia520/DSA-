class Solution {
public:
void backtrack(vector<int>& candidates, int start, int target, vector<int>& combination, vector<vector<int>>& results) {
    if (target == 0) {
        results.push_back(combination);
        return;
    }
    if (target < 0) {
        return;
    }

    for (int i = start; i < candidates.size(); i++) {
        if (i > start && candidates[i] == candidates[i - 1]) continue;

        combination.push_back(candidates[i]);
        backtrack(candidates, i + 1, target - candidates[i], combination, results);
        combination.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> results;
    vector<int> combination;
    backtrack(candidates, 0, target, combination, results);
    return results;
}

};
