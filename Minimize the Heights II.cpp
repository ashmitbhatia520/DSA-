class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int res = arr[n-1] - arr[0];
        int maxh;
        int minh;
        for(int i=0;i<n;i++){
            if(arr[i]-k<0){
                continue;
            }
            minh = min(arr[0]+k ,arr[i]-k);
            maxh = max(arr[i-1]+k,arr[n-1]-k);
            res = min(res,maxh-minh);
        }
        return res;
    }
};
