// Last updated: 1/10/2026, 9:09:54 PM
1class Solution {
2public:
3    int minimumDeleteSum(string s1, string s2) {
4        int m = s1.size();
5        int n = s2.size();
6
7        vector<vector<int>> dp(m+1 , vector<int>(n+1,-1));
8        return helper(s1,s2,m,n,dp);
9    }
10    int helper(string &s1 , string &s2 , int m , int n , vector<vector<int>> &dp){
11    
12    
13    if (m == 0 && n == 0) return 0;
14    if(dp[m][n]!= -1)return dp[m][n];
15
16    if(n==0){
17       return  dp[m][n] = s1[m-1] + helper(s1,s2,m-1,n,dp);
18    }
19
20           
21    if(m==0){
22        return dp[m][n] = s2[n-1] + helper(s1,s2,m,n-1,dp);
23    }
24
25      
26    if(s1[m-1] == s2[n-1]){
27        return dp[m][n] = helper(s1,s2,m-1,n-1,dp);
28
29    }
30    int dels1 = s1[m-1] + helper(s1,s2,m-1,n,dp);
31    int dels2 = s2[n-1] + helper(s1,s2,m,n-1,dp);
32
33    return dp[m][n] = min(dels1,dels2);
34
35    }
36};