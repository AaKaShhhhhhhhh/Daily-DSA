// Last updated: 12/11/2025, 9:32:16 PM
1class Solution {
2public:
3    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
4          vector<int> minx(n + 1, n + 1);
5        vector<int> maxx(n + 1, 0);
6        vector<int> miny(n + 1, n + 1);
7        vector<int> maxy(n + 1, 0);
8        for(auto b : buildings){
9            int x = b[0];
10            int y = b[1];
11            minx[y] = min(minx[y], x);
12            maxx[y] = max(maxx[y], x);
13            miny[x] = min(miny[x], y);
14            maxy[x] = max(maxy[x], y);
15        }
16        int ans = 0;
17        for(auto b : buildings){
18            int x = b[0];
19            int y = b[1];
20            if(minx[y] < x && x < maxx[y] && miny[x] < y && y < maxy[x]){
21                ans += 1;
22            }
23        }
24        return ans;
25
26    }
27};