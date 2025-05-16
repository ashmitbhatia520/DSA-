class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> freq, leftIndex, rightIndex;
        int degree = 0, minLength = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            if (leftIndex.find(nums[i]) == leftIndex.end())
                leftIndex[nums[i]] = i;
            rightIndex[nums[i]] = i;
            freq[nums[i]]++;
            degree = max(degree, freq[nums[i]]);
        }

        for (auto& [num, count] : freq) {
            if (count == degree) {
                int length = rightIndex[num] - leftIndex[num] + 1;
                minLength = min(minLength, length);
            }
        }

        return minLength;
    }
};
