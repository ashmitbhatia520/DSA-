#include <vector>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int curEnd = 0;
        int farthest = 0;

        for (int i = 0; i < nums.size() - 1; ++i) {
            farthest = max(farthest, i + nums[i]);

            if (i == curEnd) {
                jumps++;
                curEnd = farthest;
            }
        }
        return jumps;
    }
};
