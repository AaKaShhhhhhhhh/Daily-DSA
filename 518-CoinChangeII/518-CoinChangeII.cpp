// Last updated: 12/10/2025, 12:41:37 PM
1
2class Solution {
3public:
4    int change(int amount, vector<int>& coins) {
5        
6        vector<vector<unsigned long long>> dp(coins.size()+1, vector<unsigned long long>(amount+1,0));
7        for(int i =0 ; i<=coins.size() ; i++){
8            dp[i][0] = 1;
9        }
10
11        for(int i = 1 ; i <= coins.size() ; i++){
12            for(int j =0; j<=amount ; j++){
13
14                if(j >= coins[i - 1]){
15                    dp[i][j] = dp[i-1][j] + dp[i][j - coins[i-1]];
16
17                }else{
18                    dp[i][j] = dp[i-1][j];
19                }
20            }
21        }
22        return (int)dp[coins.size()][amount];
23    }
24};