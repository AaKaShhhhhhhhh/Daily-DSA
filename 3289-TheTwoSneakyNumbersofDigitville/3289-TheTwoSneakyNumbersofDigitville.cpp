// Last updated: 10/31/2025, 7:33:53 PM
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        // int temp = 0;
        // for(int i = 1; i < nums.size() ; i++){
        //     if(nums[temp] = nums[i]){
        //         ans.push_back(nums[i]);
                
        //         temp++;
        //     }
        // }
        // return ans;

        unordered_map<int , int> freq;

        for(int p : nums){
            freq[p]++;
        }

        for(auto &num : freq){
            
            if( num.second > 1){
                ans.push_back(num.first);
            }
        }
            return ans;
    }
};