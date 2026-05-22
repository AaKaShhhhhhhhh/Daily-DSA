// Last updated: 5/22/2026, 8:48:02 PM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n = nums.size();
5        int low = 0;
6        int high = n-1;
7        int mid;
8        while(low<=high){
9            mid = low+(high-low)/2;
10            if(nums[mid]==target){
11                return mid;
12            }
13            else if(nums[low]<=nums[mid]){
14                if(nums[low]<=target && target<=nums[mid]){
15                    high = mid-1;
16                }
17                else{
18                    low  = mid+1;
19                }
20            }
21            else{
22             if(nums[mid]<= target && target<=nums[high]){
23                low = mid+1;
24
25            }
26            else{
27                high = mid-1;
28            }
29
30            }
31                    }
32                    return -1;
33    }
34};