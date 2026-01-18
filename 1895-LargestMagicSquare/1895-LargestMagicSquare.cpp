// Last updated: 1/18/2026, 10:10:25 PM
1class Solution {
2public:
3    int largestMagicSquare(vector<vector<int>>& grid) {
4        int m = grid.size();
5        int n = grid[0].size();
6        int ans = 1;
7
8        for(int i = 0; i < m; i++){
9            for(int j = 0; j < n; j++){
10
11               
12                for(int k = 2; i + k <= m && j + k <= n; k++){
13                    
14                    int target = 0;
15                    for(int c = j; c < j + k; c++)
16                        target += grid[i][c];
17
18                    bool magic = true;
19
20                    for(int r = i; r < i + k && magic; r++){
21                        int sum = 0;
22                        for(int c = j; c < j + k; c++)
23                            sum += grid[r][c];
24                        if(sum != target) magic = false;
25                    }
26
27                   
28                    for(int c = j; c < j + k && magic; c++){
29                        int sum = 0;
30                        for(int r = i; r < i + k; r++)
31                            sum += grid[r][c];
32                        if(sum != target) magic = false;
33                    }
34
35                   
36                    int d1 = 0, d2 = 0;
37                    for(int t = 0; t < k; t++){
38                        d1 += grid[i + t][j + t];
39                        d2 += grid[i + t][j + k - 1 - t];
40                    }
41
42                    if(d1 != target || d2 != target)
43                        magic = false;
44
45                    if(magic)
46                        ans = max(ans, k);
47                }
48            }
49        }
50        return ans;
51    }
52};
53