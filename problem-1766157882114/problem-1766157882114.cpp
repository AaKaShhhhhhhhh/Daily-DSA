// Last updated: 12/19/2025, 8:54:42 PM
1class Solution {
2public:
3    int minInsertions(string s) {
4        // two pointers , first and last , if first != last letter , add the copy of first letter to last-1 , and increment first
5        int n = s.size();
6        vector<int> dp(n, 0);
7
8        for(int i = n-2; i >= 0; i--) {
9            int prev = 0; 
10            for(int j = i+1; j < n; j++) {
11                int temp = dp[j]; 
12                if(s[i] == s[j])
13                    dp[j] = prev;
14                else
15                    dp[j] = 1 + min(dp[j], dp[j-1]); 
16                prev = temp; 
17            }
18        }
19
20        return dp[n-1];
21
22
23    }
24    // int helper(string s , int i , int j){
25    //     int n = s.size();
26    //     vector<vector<int>> dp(n, vector<int>(n, -1));
27
28    //     if(i >= j) return 0;
29    //     if(dp[i][j] != -1)return dp[i][j];
30    //     if(s[i] == s[j]){
31    //         dp[i][j] = helper(s , i+1,j-1);
32    //     }else{
33    //         dp[i][j] = 1+ min(helper(s,i+1,j) , helper(s,i,j-1));
34    //     }
35    //     return dp[i][j];
36    // }
37};