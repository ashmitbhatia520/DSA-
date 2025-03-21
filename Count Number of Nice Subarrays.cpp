class Solution {
public:
  int numberOfSubarrays(vector<int>& nums, int k) {
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }

private:
    int atMostK(vector<int>& nums, int k) {
        int count = 0;
        int left = 0;
        int oddCount = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] % 2 != 0) {
                oddCount++;
            }
            while (oddCount > k) {
                if (nums[left] % 2 != 0) {
                    oddCount--;
                }
                left++;
            }
            count += right - left + 1;
        }

        return count;
    }
};
