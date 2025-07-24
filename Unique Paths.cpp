class Solution {
public:
int rec(int m,int n,vector<vector<int>>& dp){
    if(m==1 && n==1) return 1;
    if(m==0 || n==0) return 0;
    if(dp[m][n] != -1){
        return dp[m][n];
    }
    int t = rec(m-1,n,dp);
    int tt = rec(m,n-1,dp);

    return dp[m][n] = t+tt;
}
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return rec(m,n,dp);
    }
};
