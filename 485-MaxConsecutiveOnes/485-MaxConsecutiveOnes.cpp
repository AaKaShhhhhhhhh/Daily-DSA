// Last updated: 5/25/2025, 12:01:39 AM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int i;
        int left = 0;
        int right = 0;
        for(i=0 ; i<nums.size(); i++){
            if(nums[i]==1){
                left++;
            }
            
            else{
                left = 0;
                
            }
            right = std::max(left ,right);
            
        }
        return right;
    }
};