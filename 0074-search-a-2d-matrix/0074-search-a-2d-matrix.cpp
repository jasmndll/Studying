class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int st = 0;
        int end  = n*m -1;
        while(st<=end){
            int mid = st+(end-st)/2;
            int val = matrix[mid/m][mid%m];
            if(val == target){
                return true;
            }
            else if(val < target){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna