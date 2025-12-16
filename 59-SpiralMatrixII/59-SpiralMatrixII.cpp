// Last updated: 12/17/2025, 12:27:50 AM
1class Solution {
2public:
3    vector<vector<int>> generateMatrix(int n) {
4         vector<vector<int>> mat(n, vector<int>(n));
5
6        int top = 0, bottom = n - 1;
7        int left = 0, right = n - 1;
8        int num = 1;
9
10        while (top <= bottom && left <= right) {
11
12            for (int j = left; j <= right; j++)
13                mat[top][j] = num++;
14            top++;
15
16            for (int i = top; i <= bottom; i++)
17                mat[i][right] = num++;
18            right--;
19
20            if (top <= bottom) {
21                for (int j = right; j >= left; j--)
22                    mat[bottom][j] = num++;
23                bottom--;
24            }
25
26            if (left <= right) {
27                for (int i = bottom; i >= top; i--)
28                    mat[i][left] = num++;
29                left++;
30            }
31        }
32
33        return mat;
34    }
35};