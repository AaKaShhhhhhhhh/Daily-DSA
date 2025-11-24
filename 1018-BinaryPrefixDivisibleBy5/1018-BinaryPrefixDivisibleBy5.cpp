// Last updated: 11/24/2025, 8:00:28 PM
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int temp = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            temp = (temp*2 + nums[i])%5;
            if(temp ==0){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};