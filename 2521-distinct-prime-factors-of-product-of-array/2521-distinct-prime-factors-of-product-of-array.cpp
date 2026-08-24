class Solution {
public:
    bool isPrime(int n){
        if(n < 2){
            return false;
        }
        for(int i = 2; i*i <=n; i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    int distinctPrimeFactors(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> ans;
        for(int x : nums){
            for(int i = 2; i<=x; i++){
                if(x%i == 0 && isPrime(i)){
                    ans.insert(i);
                }
            }
        }
        return ans.size();
    }
};