// Last updated: 7/30/2025, 10:46:50 AM
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return cntnice(nums,k)-cntnice(nums,k-1); 
    }
 private:   
     int cntnice(vector<int>& nums, int k){
        
        int n = nums.size();
        int left = 0;
         int right = 0;
         int cnt = 0; int oddcnt = 0;
        for(right = 0; right<n ; right++){
             if(nums[right]%2!=0){
             oddcnt++;
             }
         while(oddcnt>k){
            if(nums[left]%2 != 0){
                oddcnt--;
                
            }
            left++;
         }        
        cnt+=right-left+1;
      }
        return cnt;
     }
};