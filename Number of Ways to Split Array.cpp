class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long prefixsum = 0;
        long long suffixsum = 0;
        for(int i=0;i<nums.size();i++){
            suffixsum+=nums[i];
        }
        int cnt = 0;
        for(int i=0;i<nums.size()-1;i++){
            prefixsum+= nums[i];
            suffixsum-=nums[i];
            if(prefixsum>=suffixsum){
                cnt++;
            }
        }
        return cnt;
    }
};
