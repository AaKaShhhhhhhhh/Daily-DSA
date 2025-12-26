// Last updated: 12/26/2025, 11:10:42 PM
1class Solution {
2public:
3    string shortestCommonSupersequence(string str1, string str2) {
4       int n = str1.size();
5        int m = str2.size();
6
7     
8        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
9
10        for (int i = 1; i <= n; i++) {
11            for (int j = 1; j <= m; j++) {
12                if (str1[i-1] == str2[j-1])
13                    dp[i][j] = 1 + dp[i-1][j-1];
14                else
15                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
16            }
17        }
18
19
20        string ans = "";
21        int i = n, j = m;
22
23        while (i > 0 && j > 0) {
24            if (str1[i-1] == str2[j-1]) {
25                ans.push_back(str1[i-1]);
26                i--;
27                j--;
28            }
29            else if (dp[i-1][j] > dp[i][j-1]) {
30                ans.push_back(str1[i-1]);
31                i--;
32            }
33            else {
34                ans.push_back(str2[j-1]);
35                j--;
36            }
37        }
38
39        while (i > 0) {
40            ans.push_back(str1[i-1]);
41            i--;
42        }
43
44        while (j > 0) {
45            ans.push_back(str2[j-1]);
46            j--;
47        }
48
49        reverse(ans.begin(), ans.end());
50        return ans;
51    }
52};