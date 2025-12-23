// Last updated: 12/23/2025, 11:19:01 PM
1class Solution {
2public:
3    int minDistance(string word1, string word2) {
4        int n = word1.size();
5        int m = word2.size();
6
7        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
8
9       
10        for (int i = 1; i <= n; i++) {
11            for (int j = 1; j <= m; j++) {
12                if (word1[i - 1] == word2[j - 1]) {
13                    dp[i][j] = 1 + dp[i - 1][j - 1];
14                } else {
15                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
16                }
17            }
18        }
19
20        int lcs = dp[n][m];
21        return (n - lcs) + (m - lcs);
22    }
23};