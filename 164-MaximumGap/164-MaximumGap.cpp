// Last updated: 1/17/2026, 10:22:49 PM
1class Solution {
2public:
3    int maximumGap(vector<int>& nums) {
4
5        sort(nums.begin() , nums.end());
6        int res =  0;
7        int var = 0;
8        for(int i = 1 ; i < nums.size() ; i++){
9
10            var = nums[i] - nums[i-1];
11            res = max(res , var);
12
13        }
14        return res;
15        
16    }
17};