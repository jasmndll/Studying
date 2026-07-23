class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s + s;
        string modified_t = t.substr(1, t.size() - 2);
        return modified_t.find(s) != string::npos;
    }
};