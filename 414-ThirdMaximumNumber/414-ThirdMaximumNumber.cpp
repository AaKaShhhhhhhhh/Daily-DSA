// Last updated: 10/22/2025, 9:11:17 PM
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        
        sort(nums.begin() , nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int n = nums.size();
         if( n <3)return nums[n-1];
        // for(int i = 0 ; i < n ; i++){
            
 
        // }
        return nums[n-3];
    }
};