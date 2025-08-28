// Last updated: 8/28/2025, 7:13:44 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // for(int i - 0 ; i < nums.size() ; i++){

        // }
        // int i = 0 ;
        // int j = 1;
        // while(i<nums.size()&&j<nums.size()){
        //     if(nums[i] == nums[j]){
        //         return true;
        //         break;
        //     }else{
        //         j++;
        //     }
        //     i++;

        // }
        // return false;
        unordered_map<int,int> map;
        for(int i : nums){
            map[i]++;
        }
        for(auto &i: map){
            if(i.second > 1){
                return true;
            }
        }
        return false;
    }
};