// Last updated: 1/22/2026, 9:37:57 PM
1class Solution {
2public:
3
4    int minpair(vector<int> nums){
5        int minsum = INT_MAX;
6        int ix = -1;
7
8        for(int i = 0 ; i < nums.size()-1 ; i++){
9            if(nums[i] + nums[i+1] < minsum){
10                minsum = nums[i] + nums[i+1];
11                ix = i;
12            }
13        }
14        return ix;
15    }
16    int minimumPairRemoval(vector<int>& nums) {
17        int operations = 0;
18
19        while (!is_sorted(nums.begin() , nums.end())) {
20   
21                    int i = minpair(nums);
22                     nums[i] = nums[i] + nums[i + 1];
23
24                    nums.erase(nums.begin() + i +1);
25
26                    operations++;
27
28          
29        }
30
31        return operations;
32    }
33};
34