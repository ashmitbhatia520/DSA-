class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res = words.size();
        int a[26] = {};
        for(char c:allowed){
            a[c-'a'] = 'true';
        }
        for(string word:words){
            for(char c:word){
            if(!a[c-'a']){
                res--;
                break;
            }
        }
        }
        return res;
    }
};
