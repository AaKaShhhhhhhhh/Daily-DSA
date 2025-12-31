// Last updated: 12/31/2025, 10:23:02 PM
1class Solution {
2public:
3    bool isMatch(string s, string p) {
4        
5        int n = s.size();
6        int m = p.size();
7
8        vector<vector<bool>> dp(n+1 , vector<bool>(m+1,false));
9        
10        dp[0][0] = true;
11
12         for (int j = 1; j <= m; j++) {
13            if (p[j-1] == '*')
14                dp[0][j] = dp[0][j-1];
15        }
16
17        for(int i = 1; i <= n ; i++){
18            dp[i][0] = false;
19        }
20
21        for(int i =1 ; i<=n ;i++){
22            for(int j = 1 ; j<= m ; j++){
23
24                if(s[i-1]== p[j-1] || p[j-1] == '?'){
25                    dp[i][j] = dp[i-1][j-1];
26                }
27                else if(p[j-1] == '*'){
28                    dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
29                }else{
30                    dp[i][j] = false;
31                }
32            }
33        }
34        return dp[n][m];
35
36    }
37    // bool helper(string &s, int i ){
38
39    //     for(int j = 1 ; j<= s.size() ; j++){
40    //         if(s[j-1] != '*'){
41    //             return false;
42    //         }
43            
44    //     }
45    //     return true;
46    // }
47};