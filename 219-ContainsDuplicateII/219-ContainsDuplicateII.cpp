// Last updated: 9/30/2025, 9:11:37 PM
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int , int> last;

        for(int i = 0 ; i < nums.size() ; i++){
            if(last.find(nums[i]) != last.end()){

                if(i - last[nums[i]] <= k){
                    return true;
                }
                
            }
            last[nums[i]] = i;
        }

        return false;
    }
};