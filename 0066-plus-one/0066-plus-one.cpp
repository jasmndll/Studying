class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> ans;
        for(int i = 0; i<n; i++){
            if( i == n-1){
                ans.push_back(digits[i]+1);
            }
            else{
                ans.push_back(digits[i]);
            }
        }
        for(int i = n-1; i>0; i--){
            if(ans[i] == 10){
                ans[i] = 0;
                ans[i-1] += 1;
            }
        }
        if(ans[0] == 10){
            ans[0] = 0;
            ans.insert(ans.begin(), 1);
        }
        return ans;
    }
};