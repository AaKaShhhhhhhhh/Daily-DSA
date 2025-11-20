// Last updated: 11/20/2025, 12:39:56 PM
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        // vector<vector<int>> dp(n , vector<int>(n,-1));
       vector<int> dp = triangle.back();
        for(int i = n-2 ; i>=0 ; i--){
            for(int j = 0 ;  j<=i ; j++){
                dp[j] = triangle[i][j] + min(dp[j] , dp[j+1]);
            }
        }

        return dp[0];
        // return helper( 0 , 0 , triangle , dp);

    }
    // int helper(int i , int j ,vector<vector<int>>& triangle , vector<vector<int>>& dp){
    //     int n = triangle.size();

    //     // if(i ==0 && j ==0)return triangle[0][0];
    //     // if(i<0 || j < 0)return 1e9;
    //     if(i == n-1)return triangle[i][j];
    //     if(dp[i][j] != -1)return dp[i][j];

    //     int down = helper(i+1 , j , triangle , dp);
    //     int dia = helper(i+1,j+1 , triangle , dp);
    //     return dp[i][j] = triangle[i][j] + min(down , dia);

        

    // }
};