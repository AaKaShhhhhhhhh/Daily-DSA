// Last updated: 5/25/2025, 12:01:53 AM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0 ;
        int high = n-1; int mid;int target; int ans = INT_MAX;
        while(low<=high){
            mid = low+(high-low)/2;
            if(nums[low]<= nums[high]){
                ans = min(ans, nums[low]);
                break;
            }
            if(nums[low]<= nums[mid]){
                ans = min(ans, nums[mid]);
                low = mid+1;
            }
            else{
                ans = min(ans,nums[mid]);
                high = mid-1;
            }

            
        }
        return ans;
    }
};