// Last updated: 5/25/2025, 12:01:56 AM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i;
        int j;
        for(i=0; i<nums.size(); i++){
            int x = nums[i];
            int ct = 0;
            for(j=0 ;j<nums.size(); j++){
                if(nums[j]==x){
                    ct++;
                }
            }
            if(ct==1){
                    return x;
                }
        }
        return 1;
    }
};