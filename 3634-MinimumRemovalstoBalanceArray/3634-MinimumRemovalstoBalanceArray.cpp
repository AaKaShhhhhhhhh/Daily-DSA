// Last updated: 2/6/2026, 11:12:59 PM
1class Solution {
2public:
3    int minRemoval(vector<int>& nums, int k) {
4        sort(nums.begin(), nums.end());
5
6        int n = nums.size();
7        int left = 0;
8        int maxLen = 0;
9
10        for (int right = 0; right < n; right++) {
11
12            
13            while ((long long)nums[right] > (long long)k * nums[left]) {
14                left++;
15            }
16
17           
18            maxLen = max(maxLen, right - left + 1);
19        }
20
21        return n - maxLen;
22    }
23};
24