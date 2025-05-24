// Last updated: 5/25/2025, 12:02:14 AM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
        int low = 0;
        int high = n-1;
        int mid;
        int flr = -1;int clr=-1;
       
        while(low<=high){
            mid= low+(high-low)/2;
            if(nums[mid]==target){
                flr = mid;
                low=mid+1;
                
           }
            else if(nums[mid]<target){
               
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        low=0;
        high=n-1;
        

        while(low<=high){
            mid = low+(high-low)/2;
            if( nums[mid]==target){
                clr = mid;
                high=mid-1;
          }
          else  if(nums[mid]<target){
                
                low=mid+1;
            }
           
            else{
               high=mid-1;
            }
        }
        return {clr,flr};
    }
};