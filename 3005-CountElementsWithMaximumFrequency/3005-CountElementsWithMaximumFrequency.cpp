// Last updated: 9/22/2025, 6:04:53 PM
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int cnt = 0;
        int ans = 0;
        unordered_map<int , int> freq;

        for(int i : nums){
            freq[i]++;
            ans = max(ans , freq[i]);
        }
        for(auto &p : freq){
           if(p.second == ans){
            cnt += p.second;
           }
          
        }
        return cnt;
    }
};