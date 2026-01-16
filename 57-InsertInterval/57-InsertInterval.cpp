// Last updated: 1/16/2026, 8:42:09 PM
1class Solution {
2public:
3    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
4        vector<vector<int>> ans;
5        int i = 0;
6        int n = intervals.size();
7
8       
9        while (i < n && intervals[i][1] < newInterval[0]) {
10            ans.push_back(intervals[i]);
11            i++;
12        }
13
14        while (i < n && intervals[i][0] <= newInterval[1]) {
15            newInterval[0] = min(newInterval[0], intervals[i][0]);
16            newInterval[1] = max(newInterval[1], intervals[i][1]);
17            i++;
18        }
19        ans.push_back(newInterval);
20
21      
22        while (i < n) {
23            ans.push_back(intervals[i]);
24            i++;
25        }
26
27        return ans;
28    }
29};