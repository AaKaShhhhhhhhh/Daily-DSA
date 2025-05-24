// Last updated: 5/25/2025, 12:01:27 AM
class Solution {
public:

    int findmax(vector<int>& nums){
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i=0; i<n ;i++){
             maxi= max(maxi,nums[i]);
            
        }
        return maxi;
    }
    int maximum(vector<int>& nums, int mid){
        int n = nums.size();
        long long totald=0;
        for(int i=0; i<n ;i++){
            totald += ceil((double)(nums[i])/(double)(mid));
        }
        return totald;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low=1; int high = findmax(nums);
        
        while(low<=high){
            int mid = low+(high-low)/2;
            int b = maximum(nums,mid);
            if(b <= threshold){
                high = mid-1;
            }
            else{
                low = mid+1;
            }

        }
        return low;
    }
};