// Last updated: 1/3/2026, 10:10:38 PM
1class Solution {
2public:
3    int numOfWays(int n) {
4    const int MOD = 1e9 + 7;
5        vector<vector<long long>> dp(n+1 , vector<long long>(2,0));
6
7            dp[1][0] = 6;
8            dp[1][1] = 6;
9        for(int i = 2 ; i <=n ; i++){
10            
11
12            dp[i][0] = (dp[i-1][0]*3 + dp[i-1][1]*2)%MOD;
13            dp[i][1] = (dp[i-1][0]*2 + dp[i-1][1]*2)%MOD;
14
15        }   
16         return (dp[n][0] + dp[n][1]) % MOD;     
17    }
18        
19    
20};