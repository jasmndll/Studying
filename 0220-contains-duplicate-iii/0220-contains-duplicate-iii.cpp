class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        int n = nums.size();
        set<long long> x;
        for(int i = 0; i<n; ++i){
            auto m = x.lower_bound((long long)nums[i]-valueDiff);
            if(m != x.end() && *m-nums[i] <= valueDiff){
                return true;
            }
            x.insert(nums[i]);
            if(i >= indexDiff){
                x.erase(nums[i-indexDiff]);
            }
        }
        return false;
    }
};