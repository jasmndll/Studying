class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count = 0;
        sort(intervals.begin(), intervals.end());
        pair<int,int> x = {intervals[0][0], intervals[0][1]};
        for(int i = 1; i<intervals.size(); i++){
            for(int j =1; j<intervals[0].size(); j++){
                if(intervals[i][0] < x.second){
                    count++;
                    if(intervals[i][j]<x.second){
                        x = {intervals[i][0], intervals[i][j]};
                    }
                }
                else{
                    x = {intervals[i][0],intervals[i][j]};
                }
            }
        }
        return count;
    }
};