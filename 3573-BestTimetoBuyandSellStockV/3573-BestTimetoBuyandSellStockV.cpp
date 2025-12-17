// Last updated: 12/17/2025, 9:48:41 PM
1class Solution {
2public:
3    long long maximumProfit(vector<int>& prices, int k) {
4        int n = prices.size();
5        if (n == 0 || k == 0) return 0;
6
7        const long long NEG = LLONG_MIN / 4; 
8
9   
10        vector<vector<long long>> dp(k + 1, vector<long long>(3, NEG));
11
12    
13        for (int j = 0; j <= k; j++) {
14            dp[j][0] = 0;
15            if (j > 0) {
16                dp[j][1] = -prices[0]; 
17                dp[j][2] = prices[0];  
18            }
19        }
20
21        for (int i = 1; i < n; i++) {
22            for (int j = k; j >= 1; j--) {
23              
24                dp[j][0] = max({
25                    dp[j][0],
26                    dp[j][1] == NEG ? NEG : dp[j][1] + prices[i],
27                    dp[j][2] == NEG ? NEG : dp[j][2] - prices[i]
28                });
29
30                dp[j][1] = max(
31                    dp[j][1],
32                    dp[j-1][0] == NEG ? NEG : dp[j-1][0] - prices[i]
33                );
34
35              
36                dp[j][2] = max(
37                    dp[j][2],
38                    dp[j-1][0] == NEG ? NEG : dp[j-1][0] + prices[i]
39                );
40            }
41        }
42
43        return dp[k][0];
44    }
45};