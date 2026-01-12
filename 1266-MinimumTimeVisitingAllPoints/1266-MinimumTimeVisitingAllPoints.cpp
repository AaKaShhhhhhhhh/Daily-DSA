// Last updated: 1/12/2026, 9:15:26 PM
1class Solution {
2public:
3    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
4        int m = points.size();
5        
6
7        int ans = 0;
8
9        for(int i = 1 ; i < points.size() ; i++){
10            int x = abs(points[i][0] - points[i-1][0]);
11            int y = abs(points[i][1] - points[i-1][1]);
12
13            ans+=max(x,y);
14
15
16        }
17        return ans;
18    }
19};