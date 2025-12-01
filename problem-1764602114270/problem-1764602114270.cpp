// Last updated: 12/1/2025, 8:45:14 PM
1class Solution {
2public:
3    int findTargetSumWays(vector<int>& nums, int target) {
4        
5        int sum =0;
6        for(int i : nums)sum+=i;
7        
8
9        if (abs(target) > sum) return 0;
10        if((sum + target)%2 != 0)return 0;
11
12        int t = (sum + target)/2;
13        vector<int> dp(t+1 , 0);
14        dp[0] = 1;
15
16        for(int x : nums){
17            for(int j = t ; j >= x ; j--){
18                dp[j] += dp[j-x];
19            }
20        }
21
22    return dp[t];
23    }
24    
25};