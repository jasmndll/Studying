class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums;
        vector<long long> fact(n + 1, 1);
        for (int i = 1; i <= n; i++) {
            nums.push_back(i);
            fact[i] = fact[i - 1] * i;
        }

        k--; // convert to 0-indexed
        string result;
        for (int i = n; i >= 1; i--) {
            int idx = k / fact[i - 1];
            k %= fact[i - 1];
            result += to_string(nums[idx]);
            nums.erase(nums.begin() + idx);
        }
        return result;
    }
};