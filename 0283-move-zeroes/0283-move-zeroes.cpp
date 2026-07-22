class Solution {
public:
    vector<int> move(vector<int>& nums){
        if(nums.size() == 1 && nums[0] == 0){
            return nums;
        }
        vector<int> nz;
        vector<int> z;
        for(int x : nums){
            if(x != 0){
                nz.push_back(x);
            }
            else{
                z.push_back(x);
            }
        }
        for(int y : z){
            nz.push_back(y);
        }
        return nz;
    }
    void moveZeroes(vector<int>& nums) {
        nums = move(nums);
    }
};