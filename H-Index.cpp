class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin(),citations.rend());
        int n = citations.size();
        int i=0;
        for(i;i<n;i++){
            if(citations[i]<i+1){
                break;
            }
        }
        return i;
    }
};
