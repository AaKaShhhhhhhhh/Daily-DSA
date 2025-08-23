// Last updated: 8/23/2025, 8:09:30 PM
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int cnt = 0;
        if(n==0)return 0;
          sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        int preend = intervals[0][1];
        for(int i = 1 ; i<n ; i++){
            if(intervals[i][0] < preend){
                cnt++;
               
            }else{
                preend = intervals[i][1];
            }
        }
        return cnt;
    }
};