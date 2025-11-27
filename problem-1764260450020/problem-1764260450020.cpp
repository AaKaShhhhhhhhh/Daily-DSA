// Last updated: 11/27/2025, 9:50:50 PM
1class Solution {
2public:
3    long long maxSubarraySum(vector<int>& nums, int k) {
4    int n = nums.size();
5        vector<long long> pref(k, LLONG_MAX);
6
7        long long prefix = 0;
8        long long res = LLONG_MIN;
9
10        pref[0] = 0;
11
12        for(int i = 0 ; i < n ; i++){
13             prefix+=nums[i];
14            int mod = (i +1)%k;
15
16            if(pref[mod] != LLONG_MAX){
17               
18                res = max(res, prefix - pref[mod]);
19
20            }
21            pref[mod] = min(pref[mod], prefix);
22        }
23
24        return res;
25    }
26};