class Solution {
    public int findMin(int[] nums) {
        int st = 0;
        int end = nums.length -1;
        if(nums.length == 1 || nums[st] <= nums[end]){
            return nums[0];
        }
        while(st<=end){
            int mid = st+(end-st)/2;
            if(mid > 0 &&  nums[mid]<nums[mid-1]){
                return nums[mid];
            }
            if(mid < nums.length-1 && nums[mid] > nums[mid+1]){
                return  nums[mid+1];
            }
            if(nums[mid] > nums[end]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return nums[st];
    }
}