// Last updated: 9/29/2025, 9:16:39 PM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> used;
        for(int i = 0 ;i < nums1.size() ; i++){
            for(int j = 0 ; j< nums2.size() ; j++){

                if(nums1[i] == nums2[j] && !used.count(nums1[i])){
                    ans.push_back(nums1[i]);
                     used.insert(nums1[i]);
                     break;
                }
            }
        }
        return ans;
    }
};