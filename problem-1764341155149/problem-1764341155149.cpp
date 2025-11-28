// Last updated: 11/28/2025, 8:15:55 PM
1class Solution {
2public:
3int n,m;
4    int minFallingPathSum(vector<vector<int>>& matrix) {
5         n = matrix.size();
6         m = matrix[0].size();
7
8        vector<vector<int>> dp(n , vector<int>(m,0));
9        for(int col = 0 ; col < n ; col++){
10            dp[n-1][col] = matrix[n-1][col];
11        }
12
13        for(int row = n-2 ; row >= 0 ; row--){
14            for(int col = 0 ; col < n ; col++){
15
16                int down = dp[row+1][col];
17                int dial = (col > 0) ? dp[row+1][col-1] : 1e9;
18                int diar = (col <  m-1) ? dp[row+1][col+1] : 1e9;
19
20                dp[row][col] = matrix[row][col] + min({down , dial , diar});
21            }
22        }
23        int ans = *min_element(dp[0].begin() , dp[0].end());
24        return ans;
25        // vector<vector<int>> dp(n , vector<int>(m,-1));
26        // int res = INT_MAX;
27        // for(int j = 0 ; j < m ; j++){
28        //     res = min(res , helper(matrix,dp,0 ,j));
29        // }
30        // return res;
31    }
32    // int helper(vector<vector<int>>& matrix , vector<vector<int>> &dp , int i , int j){
33       
34        
35    //     if(j < 0 || j >= m )return 1e9;
36    //     if(i == n-1)return matrix[i][j];
37    //     if(dp[i][j] != -1)return dp[i][j];
38    //   // if(n==100 && matrix[0][0]==0 ) return -1 ;
39
40    //     int down = helper(matrix , dp , i+1 , j);
41    //     int dialeft = helper(matrix , dp , i+1 , j-1);
42    //     int diaright = helper(matrix , dp , i+1 , j+1);
43
44    //     int sum = matrix[i][j] + min({down , dialeft, diaright});
45    //     return dp[i][j] = sum;
46
47
48
49    // }
50};