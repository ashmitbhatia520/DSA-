class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int left = 0, maxCount = 0, maxLength = 0;
        int hash[26] = {0};

        for (int right = 0; right < n; right++) {
            hash[s[right] - 'A']++;
            maxCount = max(maxCount, hash[s[right] - 'A']);

            while (right - left + 1 - maxCount > k) {
                hash[s[left] - 'A']--;
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
