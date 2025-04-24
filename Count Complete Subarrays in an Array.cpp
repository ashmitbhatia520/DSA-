class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int, int> distinctCountMap;
    for (int num : nums) {
        distinctCountMap[num]++;
    }
    int totalDistinct = distinctCountMap.size();
    
    int left = 0, right = 0;
    int currentDistinct = 0;
    int completeSubarrayCount = 0;
    unordered_map<int, int> windowCountMap;

    while (right < nums.size()) {
        if (windowCountMap[nums[right]] == 0) {
            currentDistinct++;
        }
        windowCountMap[nums[right]]++;
        right++;

        while (currentDistinct == totalDistinct) {
            completeSubarrayCount += (nums.size() - right + 1);
            windowCountMap[nums[left]]--;
            if (windowCountMap[nums[left]] == 0) {
                currentDistinct--;
            }
            left++;
        }
    }

    return completeSubarrayCount;
    }
};
