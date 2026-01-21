// Last updated: 1/21/2026, 9:39:40 PM
1class Solution {
2public:
3    vector<int> minBitwiseArray(vector<int>& nums) {
4        vector<int> ans;
5
6        for (int x : nums) {
7
8         
9            if (x % 2 == 0) {
10                ans.push_back(-1);
11                continue;
12            }
13
14            int j = x;
15            int bit = 1;
16
17          
18            while (j & bit) {
19                bit <<= 1;
20            }
21
22           
23            ans.push_back(x - (bit >> 1));
24        }
25
26        return ans;
27    }
28};
29