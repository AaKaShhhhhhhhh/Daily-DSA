// Last updated: 5/25/2025, 12:02:13 AM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid;
        int cnt=0;
        while(low<=high){
            mid = low+(high-low)/2;
            if(target== nums[mid]){
                
                return mid;
            }
            else if(target<nums[mid]){
                cnt = mid;
                high = mid-1;
            }
            else if(target > nums[high]){
                return high+1;
            }
            else{
                
                low = mid +1;
            }
        }
        
        
        return cnt;
    }
};