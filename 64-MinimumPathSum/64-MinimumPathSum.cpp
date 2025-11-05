// Last updated: 11/5/2025, 6:32:50 PM
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> dp(n,
                vector<int>(m, -1));

                return helper(n-1 , m-1 , grid, dp);



    }
    int helper(int i , int j , vector<vector<int>>& grid , vector<vector<int>> &dp){
        int sum = INT_MAX;

        if( i ==0 && j == 0)return grid[0][0];
        if(i<0 || j < 0)return 1e9;
        if(dp[i][j] != -1)return dp[i][j];
        

        int down = grid[i][j] + helper(i , j-1 , grid,dp);
        int right = grid[i][j] + helper(i-1 , j , grid,dp);

        return dp[i][j] = min(down, right);
    }
};