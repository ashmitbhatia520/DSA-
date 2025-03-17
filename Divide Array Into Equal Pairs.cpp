class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> f;
        for(int num : nums) {
            f[num]++; 
        }
        for(const auto& i : f) {
            if(i.second % 2 != 0) return false; 
        }
        
        return true; 
    }
};
