// Last updated: 1/14/2026, 9:44:50 PM
1class Solution {
2public:
3    int findNumberOfLIS(vector<int>& nums) {
4        int n = nums.size();
5
6       vector<int> dp(n, 1);
7       vector<int> cnt(n,1);
8        int maxi = 1;
9        for(int i = 0 ; i < n ; i ++){
10          for(int j = 0 ; j < i; j++){
11
12            if (nums[j] < nums[i] && dp[j] + 1 > dp[i]){
13                dp[i] = dp[j] + 1;
14                cnt[i] = cnt[j];
15            }else if(nums[j] < nums[i] && dp[j] + 1 == dp[i]){
16                cnt[i] = cnt[i] + cnt[j];
17            }
18            
19       }
20       maxi = max(maxi , dp[i]);
21
22        }
23        int ns = 0;
24
25        for(int i = 0 ; i < n ; i ++){
26            if(dp[i] == maxi){
27                ns += cnt[i];
28            }
29        }
30        return ns;
31
32    }
33
34    
35};