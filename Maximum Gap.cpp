class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int diff = 0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            diff = max(diff,(nums[i]-nums[i-1]));
        }
        return diff;
    }
};
