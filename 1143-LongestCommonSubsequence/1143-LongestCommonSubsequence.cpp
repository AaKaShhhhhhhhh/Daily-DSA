// Last updated: 12/12/2025, 8:17:59 PM
1class Solution {
2public:
3    int longestCommonSubsequence(string text1, string text2) {
4        int n = text1.size();
5        int m = text2.size();
6
7        vector<vector<int>> dp(n+1, vector<int>(m+1, -1)); 
8
9        return helper(text1 ,text2 , n , m, dp);
10
11
12        
13        
14    }
15    int helper(string &text1, string &text2 , int n , int m ,vector<vector<int>> &dp){
16
17        if(n==0 || m==0)return 0;
18
19        if(dp[n][m] != -1) return dp[n][m];
20        
21        
22
23        if( text1[n-1] == text2[m-1] ){
24           dp[n][m] = 1+ helper(text1,text2 , n-1, m-1,dp);
25        }else{
26            dp[n][m] = max(
27                helper(text1,text2,n-1,m,dp), helper(text1,text2,n,m-1,dp));
28        }
29
30        return dp[n][m];
31    }
32    
33};