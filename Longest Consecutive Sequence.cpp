class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 1;
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int cnt = 0;
        int last_smaller = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1 == last_smaller){
                cnt++;
                last_smaller = nums[i];
            }
            else if(nums[i]!=last_smaller){
                cnt = 1;
                last_smaller = nums[i];
            }
            longest = max(longest,cnt);
        }
        return longest;
    }
};
