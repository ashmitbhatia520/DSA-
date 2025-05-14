class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
           set<int> uniqueCandies(candyType.begin(), candyType.end());
    int n = candyType.size();
    int maxCandiesAliceCanEat = n / 2;
    return min(static_cast<int>(uniqueCandies.size()), maxCandiesAliceCanEat);
    }
};
