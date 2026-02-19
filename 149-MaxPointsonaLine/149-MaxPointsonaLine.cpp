// Last updated: 2/19/2026, 8:01:18 PM
1class Solution {
2public:
3    int maxPoints(vector<vector<int>>& points) {
4        int n = points.size();
5        if (n <= 2) return n;
6
7        int ans = 0;
8        
9        for(int i = 0; i < points.size() ;i++) {
10            
11                unordered_map<string, int> mp;
12
13                int same= 1;
14                int maxi = 0;
15
16            for(int j = i+1 ; j< points.size() ; j++){
17
18                int x1 = points[i][0];
19                int y1 = points[i][1];
20                int x2 = points[j][0];
21                int y2 = points[j][1];
22
23                if(x1==x2 && y1==y2){
24                    same++;
25                    continue;
26                }
27
28                int dx = x2-x1;
29                int dy = y2-y1;
30
31                 if (dx < 0) {
32                    dx = -dx;
33                    dy = -dy;
34                }
35
36               
37                if (dx == 0) dy = 1;
38                if (dy == 0) dx = 1;
39
40                int g = gcd(dx,dy);
41
42                dx/=g;
43                dy/=g;
44
45                string slope = to_string(dx) + "/" + to_string(dy);
46
47                mp[slope]++;
48                maxi = max(maxi , mp[slope]);
49            }
50
51            ans = max(ans , maxi+same);
52        }
53        return ans;
54    }
55
56    int gcd(int a , int b){
57        if (b == 0) return abs(a);
58        return gcd(b, a % b);
59    }
60};