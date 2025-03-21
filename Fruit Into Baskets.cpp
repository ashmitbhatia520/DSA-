class Solution {
public:
    int totalFruit(vector<int>& fruits) {
          int n = fruits.size();
    unordered_map<int, int> fruitCount; // To count the number of each fruit type
    int maxlen = 0;
    int left = 0; 
    for (int right = 0; right < n; right++) {
        fruitCount[fruits[right]]++; 
        while (fruitCount.size() > 2) {
            fruitCount[fruits[left]]--; 
            if (fruitCount[fruits[left]] == 0) {
                fruitCount.erase(fruits[left]); 
            }
            left++; 
        }
        maxlen = max(maxlen, right - left + 1);
    }

    return maxlen;
    }
};
