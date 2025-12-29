// Last updated: 12/29/2025, 9:44:33 PM
1class Solution {
2public:
3    int minDistance(string word1, string word2) {
4        int n = word1.size();
5        int m = word2.size();
6
7        vector<vector<int>> dp(n+1 , vector<int>(m+1,0));
8 for (int i = 0; i <= n; i++)
9            dp[i][m] = n - i;
10
11        for (int j = 0; j <= m; j++)
12            dp[n][j] = m - j;
13
14        
15        for (int i = n - 1; i >= 0; i--) {
16            for (int j = m - 1; j >= 0; j--) {
17                if (word1[i] == word2[j]) {
18                    dp[i][j] = dp[i+1][j+1];
19                } else {
20                    dp[i][j] = 1 + min({
21                        dp[i+1][j],     
22                        dp[i][j+1],     
23                        dp[i+1][j+1]   
24                    });
25                }
26            }
27        }
28
29        return dp[0][0];
30    }
31};