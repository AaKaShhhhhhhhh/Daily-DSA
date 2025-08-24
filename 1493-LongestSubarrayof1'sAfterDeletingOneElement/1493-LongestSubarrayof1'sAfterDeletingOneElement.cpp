// Last updated: 8/24/2025, 4:16:12 PM
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        
        int cnt =0 ; int maxlen =0 ;
        for(int right = 0 ; right<n ; right++){
            if(nums[right] == 0){
                cnt++;
                
            }
            while(cnt>1){
                if(nums[left] == 0){
                    cnt--;
                }
                left++;
            }
              maxlen = max(maxlen, right-left+1-1);
            
        }
        return maxlen;
    }
};