// Last updated: 5/18/2026, 10:04:03 PM
1class Solution {
2public:
3    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
4        vector<vector<int>> result;
5        vector<int> arr;
6        sort(nums.begin(), nums.end());
7        helper(nums, result , arr, 0);
8        return result;
9        
10    }
11        void helper(vector<int> &nums , vector<vector<int>>& result , vector<int>& arr, int i){
12        if(i == nums.size()){
13            result.push_back(arr);
14           return;
15        }
16        arr.push_back(nums[i]);
17        helper(nums, result , arr, i+1);
18               arr.pop_back();
19
20        
21
22        int next = i+1;
23        while(next<nums.size() && nums[next]==nums[i]){
24            next++;
25        }
26        helper(nums, result , arr, next);
27        
28    }
29};