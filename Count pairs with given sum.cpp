class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int cnt = 0;
        int n = arr.size();
        unordered_map<int,int> num;
        for(int nu:arr){
            int co = target-nu;
            if(num.find(co) != num.end()){
                cnt+= num[co];
            }
            num[nu]++;
        }
        return cnt;
    }
};
