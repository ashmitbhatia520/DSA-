class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int t = n*n;
        int m = maxWeight/w;
        return min(t,m);
    }
};
