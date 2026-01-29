// Last updated: 1/29/2026, 9:19:18 PM
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        
5        int n = nums.size();
6        vector<int> result(n, 1);
7        int prefix = 1;
8        for (int i = 0; i < n; i++) {
9            result[i] *= prefix;
10            prefix *= nums[i];
11        }
12
13        
14        int postfix = 1;
15        for (int i = n - 1; i >= 0; i--) {
16            result[i] *= postfix;
17            postfix *= nums[i];
18        }
19        
20        return result;
21    }
22};