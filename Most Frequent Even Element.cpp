class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        for (int num : nums) {
            if (num % 2 == 0) {
                mp[num]++;
            }
        }
        int maxFreq = 0;
        int result = -1;

        for (auto it : mp) {
            if (it.second > maxFreq || (it.second == maxFreq && it.first < result)) {
                maxFreq = it.second;
                result = it.first;
            }
        }

        return result;
    }
};
