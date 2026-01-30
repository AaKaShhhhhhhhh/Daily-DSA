// Last updated: 1/30/2026, 8:54:33 PM
1class Solution {
2public:
3    vector<int> findDuplicates(vector<int>& nums) {
4        unordered_map<int, int> freq;
5        vector<int> ans;
6        
7        for(int i :nums){
8            freq[i]++;
9
10        }
11
12        for(auto const& [f,s] : freq ){
13            if( s == 2 ){
14                ans.push_back(f);
15                
16            }
17        }
18        return ans;
19    }
20};