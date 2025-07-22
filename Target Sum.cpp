class Solution {
public:
    int countWays(vector<int>& nums, int index, int currentSum, int target, unordered_map<string, int>& memo) {
        if (index == nums.size()) {
            return currentSum == target ? 1 : 0;
        }

        string key = to_string(index) + "," + to_string(currentSum);
        if (memo.find(key) != memo.end()) {
            return memo[key];
        }

        int add = countWays(nums, index + 1, currentSum + nums[index], target, memo);
        int subtract = countWays(nums, index + 1, currentSum - nums[index], target, memo);

        return memo[key] = add + subtract;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<string, int> memo;
        return countWays(nums, 0, 0, target, memo);
    }
};
