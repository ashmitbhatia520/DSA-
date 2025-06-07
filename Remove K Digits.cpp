class Solution {
public:
    string removeKdigits(string num, int k) {
    stack<char> s;
    for (char digit : num) {
        while (k > 0 && !s.empty() && s.top() > digit) {
            s.pop();
            k--;
        }
        s.push(digit);
    }
    while (k > 0 && !s.empty()) {
        s.pop();
        k--;
    }
    
    string result;
    while (!s.empty()) {
        result += s.top();
        s.pop();
    }
    
    reverse(result.begin(), result.end());
    
    while (result.size() > 1 && result[0] == '0') {
        result.erase(result.begin());
    }
    
    return result.empty() ? "0" : result;
    }
};
