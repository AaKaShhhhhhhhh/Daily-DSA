// Last updated: 12/3/2025, 8:45:33 PM
1class Solution {
2public:
3    int coinChange(vector<int>& coins, int amount) {
4        vector<int> dp(amount+1 , 1e9);
5
6        dp[0] = 0;
7
8        for(int x : coins){
9            for(int i = x ; i <=amount ; i++){
10                dp[i] = min(dp[i] , dp[i-x]+1);
11            }
12        }
13        return dp[amount] == 1E9 ? -1 : dp[amount];
14    }
15};