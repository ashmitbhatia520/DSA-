class Solution {
public:
  string backspace(const string& s) {
    string stack;
    for (const char c : s)
      if (c != '#')
        stack.push_back(c);
      else if (!stack.empty())
        stack.pop_back();
    return stack;
  }

    bool backspaceCompare(string s, string t) {
        return backspace(s) == backspace(t);
    }
};
