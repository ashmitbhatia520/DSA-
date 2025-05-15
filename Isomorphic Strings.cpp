class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> sa(256,-1);
        vector<int> st(256,-1);
        for(int i=0;i<s.length();i++){
            if(sa[s[i]] != st[t[i]]) return false;

            sa[s[i]] = st[t[i]] = i;
        }
        return true;
    }
};
