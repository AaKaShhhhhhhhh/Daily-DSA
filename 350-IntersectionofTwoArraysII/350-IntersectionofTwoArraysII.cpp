// Last updated: 10/12/2025, 10:18:20 PM
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> ans;
        vector<bool> used(m, false);
        //int i = 0; int j = 0;
        // while(i<n && j<m){
        //     if(nums1[i] == nums2[j]){
        //         ans.push_back[nums[i]];
        //     }
        // }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(!used[j] && nums1[i] == nums2[j]){
                 ans.push_back(nums1[i]);
                 used[j] = true;
                 break;
             }
            }
        }
        return ans;
    }
};