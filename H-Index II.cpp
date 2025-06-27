class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int z = 0;
        for(int i=0;i<n;i++){
            int x = n-i;
            if(citations[i]>=x){
                return x;
            }
        }
        return 0;
    }
};
