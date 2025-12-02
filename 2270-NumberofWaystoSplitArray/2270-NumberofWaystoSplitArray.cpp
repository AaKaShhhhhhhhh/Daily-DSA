// Last updated: 12/2/2025, 9:23:04 PM
1class Solution {
2public:
3    int waysToSplitArray(vector<int>& nums) {
4        int n = nums.size();
5        long long prefix = 0;
6        long long sum = 0; int cnt = 0;
7        for(int x:nums)sum+=x;
8
9        for(int i = 0 ; i < n-1 ; i++){
10            prefix = prefix + nums[i];
11            if(prefix >= (sum - prefix)){
12                cnt++;
13            }
14        }
15        return cnt;
16    }
17};