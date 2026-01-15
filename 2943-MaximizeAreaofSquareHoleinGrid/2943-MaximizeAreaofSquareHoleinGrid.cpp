// Last updated: 1/15/2026, 10:00:57 PM
1class Solution {
2public:
3    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
4        
5        sort(hBars.begin() , hBars.end());
6        sort(vBars.begin() , vBars.end());
7
8        int maxh = 1 ; int cnt = 1;
9        for(int i = 1 ; i < hBars.size() ; i++){
10
11            if(hBars[i] == hBars[i-1] + 1){
12                cnt++;
13            }else{
14                cnt = 1;
15            }
16            maxh = max(maxh , cnt);
17        }
18       int  maxv = 1;cnt = 1;
19
20            for(int i = 1 ; i < vBars.size() ; i++){
21
22            if(vBars[i] == vBars[i-1] + 1){
23                cnt++;
24            }else{
25                cnt = 1;
26            }
27            maxv = max(maxv , cnt);
28        }
29        int s = min(maxh+1 , maxv+1);
30        return s*s;
31
32    }
33};