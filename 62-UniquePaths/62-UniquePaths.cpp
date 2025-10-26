// Last updated: 10/26/2025, 8:05:33 PM
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return helper(m, n, dp);
    }
    int helper(int m , int n, vector<vector<int>>& dp) {
        
        if(m == 1 && n == 1)return 1;
        if(m <= 0 || n <= 0)return 0;
        if(dp[m][n] != -1)return dp[m][n];

        int down = helper(m-1 ,n , dp);
        int right = helper(m , n-1 ,dp);

        

        return dp[m][n] = down + right;
    }
};