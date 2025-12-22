// Last updated: 12/22/2025, 10:40:30 PM
1class Solution {
2public:
3    int minDeletionSize(vector<string>& strs) {
4        int rows = strs.size();
5        int cols = strs[0].size();
6
7        vector<int> dp(cols, 1);
8        int lis = 1;
9
10        for (int j = 0; j < cols; j++) {
11            for (int i = 0; i < j; i++) {
12                bool ok = true;
13
14                
15                for (int r = 0; r < rows; r++) {
16                    if (strs[r][i] > strs[r][j]) {
17                        ok = false;
18                        break;
19                    }
20                }
21
22                if (ok) {
23                    dp[j] = max(dp[j], dp[i] + 1);
24                }
25            }
26            lis = max(lis, dp[j]);
27        }
28
29        return cols - lis;
30    }
31};