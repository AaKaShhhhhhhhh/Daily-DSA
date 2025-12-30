// Last updated: 12/30/2025, 7:47:19 PM
1class Solution {
2public:
3    int numMagicSquaresInside(vector<vector<int>>& grid) {
4        
5        int m = grid.size();
6        int n = grid[0].size();
7        int count = 0;
8
9        for (int i = 0; i <= m - 3; i++) {
10            for (int j = 0; j <= n - 3; j++) {
11                if (magic(grid, i, j))
12                    count++;
13            }
14        }
15
16        return count;
17    }
18
19    bool magic(vector<vector<int>>& g , int r , int c){
20
21        if (g[r+1][c+1] != 5) return false;
22
23        vector<bool> seen(10, false);
24
25        for(int i = r ; i <r+3 ; i++){
26            for(int j = c ; j <c+3 ; j++){
27                int val = g[i][j];
28                if (val < 1 || val > 9 || seen[val])
29                    return false;
30                seen[val] = true;
31            }
32        }
33
34        for(int i = 0 ; i < 3 ; i++){
35            if(g[r+i][c] + g[r+i][c+1] + g[r+i][c+2] != 15)
36            return false;
37        }
38
39        for(int i = 0 ; i < 3 ; i++){
40            if(g[r][c+i] + g[r+1][c+i] + g[r+2][c+i] != 15)
41            return false;
42        }
43
44        if (g[r][c] + g[r+1][c+1] + g[r+2][c+2] != 15)
45            return false;
46        if (g[r][c+2] + g[r+1][c+1] + g[r+2][c] != 15)
47            return false;
48
49        return true;
50    }
51};