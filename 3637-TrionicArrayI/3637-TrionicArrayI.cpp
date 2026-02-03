// Last updated: 2/3/2026, 11:15:27 PM
1class Solution {
2public:
3    bool isTrionic(vector<int>& nums) {
4        int n = nums.size();
5        if (n < 4) return false;
6
7        int i = 0;
8
9        
10        while (i + 1 < n && nums[i] < nums[i + 1]) {
11            i++;
12        }
13
14        if (i == 0 || i == n - 1) return false;
15
16        
17        while (i + 1 < n && nums[i] > nums[i + 1]) {
18            i++;
19        }
20
21        if (i == n - 1) return false;
22
23 
24        while (i + 1 < n && nums[i] < nums[i + 1]) {
25            i++;
26        }
27
28        return i == n - 1;
29    }
30};
31