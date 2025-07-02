class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        vector<int> pre(n,1);
        int res = 1;
        for(int i=0;i<n;i++){
            pre[i] = res;
            res*= arr[i];
        }
        int suff = 1;
        for(int i=n-1;i>=0;i--){
            pre[i] *= suff;
            suff*=arr[i];
        }
        return pre;
    }
};
