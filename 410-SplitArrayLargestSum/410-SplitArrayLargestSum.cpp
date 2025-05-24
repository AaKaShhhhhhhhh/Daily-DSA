// Last updated: 5/25/2025, 12:01:40 AM
class Solution {
public:
    int ways(vector<int>& nums, int m){
        int way= 1; int ele = 0;
        int n = nums.size();
        for(int i=0; i<n ;i++){
            if(ele+nums[i]>m){
                way++;
                ele = nums[i];
            }
            else{
                ele+=nums[i];
            } 

        }
        return way;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
        while(low<=high){
            int mid = low+(high-low)/2;
            if(ways(nums,mid)>k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return low;
    }
};