// Last updated: 12/6/2025, 9:47:38 PM
1class Solution {
2public:
3static const int mod = 1e9 + 7;
4    int countPartitions(vector<int>& nums, int k) {
5        int n = nums.size();
6        vector<long long> dp(n + 1, 0);
7        vector<long long> prefix(n + 1, 0);
8
9        dp[0] = 1;
10        prefix[0] = 1;
11
12        multiset<int> s;
13
14        int j = 0;
15
16        for (int i = 0; i < n; i++) {
17            s.insert(nums[i]);
18
19            while (j <= i && (*s.rbegin() - *s.begin()) > k) {
20                s.erase(s.find(nums[j]));
21                j++;
22            }
23            if (j > 0) {
24                dp[i + 1] = (prefix[i] - prefix[j - 1]+mod)%mod;
25            }
26
27            else {
28                dp[i + 1] = prefix[i]%mod;
29            }
30
31            prefix[i + 1] = (prefix[i] + dp[i + 1]) % mod;
32        }
33
34        return dp[n];
35    }
36};