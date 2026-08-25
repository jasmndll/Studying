class Solution {
public:
    int longestValidParentheses(string s) {
        if (s.length() < 2) return 0;

        vector<pair<char,int>> ans;
        ans.push_back({')',-1});
        int maxlen = 0;
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                ans.push_back({'(', i});
            }
            else{
                if(!ans.empty() && ans.back().first == '('){
                    ans.pop_back();
                    int curr = i-ans.back().second;
                    maxlen = max(maxlen,curr);
                }
                else{
                    ans.push_back({')', i});
                }
            }
        }
        return maxlen; 
    }
};