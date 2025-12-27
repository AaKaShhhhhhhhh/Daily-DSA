// Last updated: 12/27/2025, 5:51:48 PM
1class Solution {
2public:
3    int numDistinct(string s, string t) {
4        int n = s.size();
5        int m  = t.size();
6
7        vector<vector<unsigned long long>> dp(n+1, vector<unsigned long long>(m+1,0));
8        
9        for(int i = 0 ; i <= n ; i++ ){
10            dp[i][m] = 1;
11        }
12        for(int i = n-1 ; i >= 0 ; i--){
13            for(int j = m-1 ; j >= 0 ; j--){
14                if(s[i] == t[j]){
15                    dp[i][j] = dp[i+1][j+1] + dp[i+1][j];
16                }else{
17                    dp[i][j] = dp[i+1][j];
18                }
19            }
20        }
21
22        return dp[0][0];
23        
24    }
25    // int helper(string s , string t , int n , int m , vector<vector<int>> &dp){
26
27        
28    // }
29};