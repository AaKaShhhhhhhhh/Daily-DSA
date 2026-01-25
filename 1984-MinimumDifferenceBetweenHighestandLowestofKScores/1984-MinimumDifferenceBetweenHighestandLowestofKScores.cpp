// Last updated: 1/25/2026, 7:45:38 PM
1class Solution {
2public:
3    int minimumDifference(vector<int>& nums, int k) {
4        
5        sort(nums.begin() , nums.end());
6
7        int left = 0 ;
8        int right = k-1;
9        if(nums.size() == 1)return 0;
10        int mini = INT_MAX;
11        while(right < nums.size()){
12            
13
14          //  diff = nums[right] - nums[left];
15            mini = min(mini , nums[right] - nums[left]);
16            left++;
17            right++;
18
19        }
20        return mini;
21    }
22};