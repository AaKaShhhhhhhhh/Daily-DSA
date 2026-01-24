// Last updated: 1/24/2026, 10:09:55 PM
1class Solution {
2public:
3    int minPairSum(vector<int>& nums) {
4        sort(nums.begin() , nums.end());
5        int maxi = 0 ;
6        
7        int left = 0 ; 
8        int right = nums.size()-1;
9        while(left < right){
10            maxi = max(maxi, nums[left] + nums[right]);
11            left++;
12            right--;
13        }
14        return maxi;
15    }
16};