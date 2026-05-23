// Last updated: 5/23/2026, 12:03:37 PM
1class Solution {
2public:
3    bool check(vector<int>& nums) {
4        int count=0;
5for(int i=0;i<nums.size();i++){
6// if(nums[i+1]==nums[i])continue;
7if(nums[i]>nums[(i+1)%nums.size()]){
8count++;
9}
10}
11if(count>1){
12return false;
13}
14return true;
15}
16};