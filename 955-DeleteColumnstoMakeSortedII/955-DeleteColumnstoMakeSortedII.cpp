// Last updated: 12/21/2025, 11:05:50 PM
1class Solution {
2public:
3    int minDeletionSize(vector<string>& strs) {
4       int m = strs.size();
5        int n = strs[0].size();
6        int cnt = 0;
7
8        vector<bool> arr(m - 1, false);  
9
10        for (int col = 0; col < n; col++) {
11            bool discard = false;
12
13      
14            for (int row = 0; row < m - 1; row++) {
15                if (!arr[row] && strs[row][col] > strs[row + 1][col]) {
16                    discard = true;
17                    break;
18                }
19            }
20
21            if (discard) {
22                cnt++;
23                continue;
24            }
25
26         
27            for (int row = 0; row < m - 1; row++) {
28                if (!arr[row] && strs[row][col] < strs[row + 1][col]) {
29                    arr[row] = true;
30                }
31            }
32        }
33        return cnt;
34    }
35};