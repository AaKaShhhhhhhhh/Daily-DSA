// Last updated: 5/15/2026, 6:58:44 PM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int n = nums.size();
5        int low = 0 ;
6        int high = n-1; int mid;int target; int ans = INT_MAX;
7        while(low<=high){
8            mid = low+(high-low)/2;
9            if(nums[low]<= nums[high]){
10                ans = min(ans, nums[low]);
11                break;
12            }
13            if(nums[low]<= nums[mid]){
14                ans = min(ans, nums[mid]);
15                low = mid+1;
16            }
17            else{
18                ans = min(ans,nums[mid]);
19                high = mid-1;
20            }
21
22            
23        }
24        return ans;
25    }
26};