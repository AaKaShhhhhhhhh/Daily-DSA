// Last updated: 5/1/2026, 2:27:31 AM
1class Solution {
2public:
3    int maxPathScore(vector<vector<int>>& grid, int k) {
4        int m = grid.size();
5        int n = grid[0].size();
6
7        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(k + 1, -1)));      
8
9        int result = helper(grid, k, 0, 0, dp);
10        
11        return (result < 0) ? -1 : result;
12    }
13
14    int helper(vector<vector<int>> &grid , int k , int i , int j ,  vector<vector<vector<int>>> &dp){
15        int m = grid.size();
16        int n = grid[0].size();
17
18        if (i >= m || j >= n) return -1e9;
19
20        int currentcost = (grid[i][j] > 0) ? 1 : 0;
21        if (k < currentcost) return -1e9;
22
23        if (i == m - 1 && j == n - 1) return grid[i][j];
24
25        if(dp[i][j][k] != -1) return dp[i][j][k];
26
27        int right = helper(grid, k - currentcost, i, j + 1, dp);
28        int down = helper(grid, k - currentcost, i + 1, j, dp);
29
30        int res = max(right, down);
31        
32        if (res <= -1e7) return dp[i][j][k] = -1e9;
33
34        return dp[i][j][k] = grid[i][j] + res;
35    }
36};