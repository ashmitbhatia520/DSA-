class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i:arr){
            mp[i]++;
        }
        int result = -1;
        for (auto& pair : mp) {
            if (pair.first == pair.second) {
                result = max(result, pair.first);
            }
        }
        return result;
    }
};
