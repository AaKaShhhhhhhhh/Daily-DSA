// Last updated: 2/12/2026, 10:02:33 PM
1class Solution {
2public:
3    int longestBalanced(string s) {
4         
5       int n = s.size();
6        int ans = 0;
7
8        for (int i = 0; i < n; i++) {
9
10            vector<int> freq(26, 0);
11
12            for (int j = i; j < n; j++) {
13
14                freq[s[j] - 'a']++;
15
16                int mn = INT_MAX;
17                int mx = 0;
18
19                
20                for (int k = 0; k < 26; k++) {
21                    if (freq[k] > 0) {
22                        mn = min(mn, freq[k]);
23                        mx = max(mx, freq[k]);
24                    }
25                }
26
27                
28                if (mn == mx) {
29                    ans = max(ans, j - i + 1);
30                }
31            }
32        }
33
34        return ans;
35
36    }
37};