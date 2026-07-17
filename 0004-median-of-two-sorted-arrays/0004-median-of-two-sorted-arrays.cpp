class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> merged;
        
        merged.reserve(m + n); 
        for (int x : nums1) {
            merged.push_back(x);
        }
        for (int y : nums2) {
            merged.push_back(y);
        }
        sort(merged.begin(), merged.end());
        
        int p = merged.size();
        if (p % 2 != 0) {
            return merged[p / 2];
        } else {
            return (merged[(p / 2) - 1] + merged[p / 2]) / 2.0;
        }
    }
};