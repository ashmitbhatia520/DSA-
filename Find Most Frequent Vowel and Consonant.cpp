class Solution {
public:
    int maxFreqSum(string s) {
    map<char, int> vo, co;
    for (char x : s) {
        if ("aeiou"s.find(x) != string::npos) vo[x]++;
        else co[x]++;
    }
    int mv = 0, mc = 0;
    for (auto [_, cnt] : vo) mv = max(mv, cnt);
    for (auto [_, cnt] : co) mc = max(mc, cnt);
    return mv + mc;
    }
};
