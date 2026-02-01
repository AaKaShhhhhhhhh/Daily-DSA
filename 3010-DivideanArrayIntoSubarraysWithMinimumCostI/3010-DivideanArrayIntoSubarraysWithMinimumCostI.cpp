// Last updated: 2/1/2026, 10:39:18 PM
1class Solution {
2public:
3    int minimumCost(vector<int>& nums) {
4        
5        int first = nums[0];
6
7        int min1 = INT_MAX;
8        int min2 = INT_MAX;
9
10      
11        for (int i = 1; i < nums.size(); i++) {
12            if (nums[i] < min1) {
13                min2 = min1;
14                min1 = nums[i];
15            } 
16            else if (nums[i] < min2) {
17                min2 = nums[i];
18            }
19        }
20
21        return first + min1 + min2;
22        
23        
24    }
25};