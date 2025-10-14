// Last updated: 10/14/2025, 8:39:03 PM
class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int cnt = 1 ;
        int temp  = 0;
        if(k<=1)return true;
        if(nums.size() < k)return false;
        for(int i = 1 ; i < nums.size() ; ++i){
            if(nums[i] > nums[i-1]){

                cnt++;
                if (cnt >= 2 * k) return true;          
                if (temp >= k && cnt >= k) return true;
            }else{
                temp = cnt;
                cnt = 1;
            }
            
            
        }
        if (cnt >= 2 * k) return true;
        if (temp >= k && cnt >= k) return true;
        return false;
    }
};