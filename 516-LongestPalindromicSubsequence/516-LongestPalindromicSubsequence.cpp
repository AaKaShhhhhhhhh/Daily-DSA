// Last updated: 12/18/2025, 9:23:38 PM
1class Solution {
2public:
3    int longestPalindromeSubseq(string s) {
4        string s2 = s;
5        reverse(s.begin() , s.end());
6
7        return helper(s,s2);
8    }
9    int helper(string s1, string s2){
10
11        int n = s1.length();
12        int m = s2.length();
13
14        vector<vector<int>> dp(n+1 , vector<int>(m+1,-1));
15        for(int i = 0 ; i <= n ; i++){
16            dp[i][0] = 0;
17        }
18        
19        for(int i = 0 ; i <= m ; i++){
20            dp[0][i] = 0;
21        }
22
23        for(int i = 1 ; i <= n ; i++){
24            for(int j = 1 ; j <= m ; j++){
25
26                if(s1[i-1] == s2[j-1]){
27                    dp[i][j] = 1 + dp[i-1][j-1];
28                }
29                else{
30                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
31                }
32            }
33        }
34        return dp[n][m];
35    }
36};