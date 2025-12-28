// Last updated: 12/28/2025, 7:01:00 PM
1class Solution {
2public:
3    int countNegatives(vector<vector<int>>& grid) {
4        int m = grid.size();
5        int n = grid[0].size();
6
7        int row = 0, col = n - 1;
8        int count = 0;
9
10        while (row < m && col >= 0) {
11            if (grid[row][col] < 0) {
12                count += (m - row); 
13                col--;
14            } else {
15                row++;
16            }
17        }
18
19        return count;
20    }
21};