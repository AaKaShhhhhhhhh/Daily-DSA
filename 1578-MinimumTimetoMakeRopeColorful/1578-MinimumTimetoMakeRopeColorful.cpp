// Last updated: 11/3/2025, 9:23:06 PM
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>> arr;
        for (int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        
        sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
            return a.first > b.first;
        });

        
        vector<pair<int,int>> topk(arr.begin(), arr.begin() + k);

        
        sort(topk.begin(), topk.end(), [](auto &a, auto &b) {
            return a.second < b.second;
        });

       
        vector<int> result;
        for (auto &p : topk)
            result.push_back(p.first);

        return result;
    }
};
