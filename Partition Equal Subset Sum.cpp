class Solution {
public:
bool rec(int i,int &n,int sum,int &total,vector<int> &nums,vector<vector<int>> &dp){
    if(i==n){
        return sum == (total/2);
    }
    if(dp[i][sum] != -1){
        return dp[i][sum];
    }
    // not take
    bool not_take = rec(i+1,n,sum,total,nums,dp);

    // take

    bool take = rec(i+1,n,sum+nums[i],total,nums,dp);
    

    return dp[i][sum] = take || not_take;
}
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        for(int it:nums){
            total+=it;
        }
        vector<vector<int>> dp(n+1,vector<int>(total+1,-1));
        if(total%2!=0) return false;
        return rec(0,n,0,total,nums,dp);
    }
};
