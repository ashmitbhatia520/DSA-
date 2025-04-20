class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
    vector<int> oddIndices;
    vector<int> evenIndices;

    for (int i = 0; i < nums.size(); ++i) {
        if (i % 2 == 0) {
            evenIndices.push_back(nums[i]);
        } else {
            oddIndices.push_back(nums[i]);
        }
    }

    sort(oddIndices.rbegin(), oddIndices.rend());
    sort(evenIndices.begin(), evenIndices.end());

    vector<int> result(nums.size());
    for (int i = 0; i < nums.size(); ++i) {
        if (i % 2 == 0) {
            result[i] = evenIndices[i / 2];
        } else {
            result[i] = oddIndices[i / 2];
        }
    }

    return result;
    }
};
