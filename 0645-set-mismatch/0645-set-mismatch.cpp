class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int dup = -1;
        int mis = 1;
        vector<int> ans;
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
              dup = nums[i];
            }
            else if(nums[i+1] > nums[i]+1){
                mis = nums[i]+1;
            }
        }
        if(nums.back() != nums.size()){
            mis = nums.size();
        }
        return {dup,mis};
    }
};