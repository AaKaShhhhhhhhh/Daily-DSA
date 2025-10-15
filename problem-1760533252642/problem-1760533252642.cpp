// Last updated: 10/15/2025, 6:30:52 PM
class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1 , -1);

        dp[0] = 1; dp[1] = 1;

        for(int i = 2 ; i <=n ; i++){
            if(dp[i] == 0)return 1;

            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};