// Last updated: 12/5/2025, 11:44:35 AM
1class Solution {
2public:
3    int countPartitions(vector<int>& nums) {
4        int n = nums.size();
5        
6        
7        int tsum = 0; int sum1 = 0;int cnt = 0;
8        for(int j : nums)tsum+=j;
9        for(int i = 0 ; i < n-1 ; i++){
10           
11            sum1 += nums[i];
12           tsum = tsum - nums[i];
13            if((sum1 % 2) == (tsum % 2)){
14                cnt++;
15            }
16        }
17        return cnt;
18    }
19};