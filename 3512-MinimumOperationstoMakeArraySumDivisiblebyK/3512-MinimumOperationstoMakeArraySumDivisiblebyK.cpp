// Last updated: 11/29/2025, 5:44:56 PM
1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4        long long sum = 0 ;
5        int ans = 0;
6        for(int i : nums)sum+=i;
7        ans = sum%k;
8        if(ans == 0)return 0;
9
10        return ans;
11    }
12};