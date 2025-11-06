// Last updated: 11/6/2025, 8:28:59 PM
class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int,int> freq;
        for(int i : nums){
            freq[i]++;
        }
        int maxlen = 0;
        for(auto &p :freq){
            if(freq.find(p.first + 1) != freq.end()){
             maxlen = max(maxlen , p.second+freq[p.first+1]);
            }
        }
        return maxlen;
    }
};