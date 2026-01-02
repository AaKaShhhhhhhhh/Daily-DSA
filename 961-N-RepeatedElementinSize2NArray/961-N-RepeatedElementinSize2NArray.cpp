// Last updated: 1/2/2026, 7:29:02 PM
1class Solution {
2public:
3    int repeatedNTimes(vector<int>& nums) {
4        
5        unordered_map<int,int> freq;
6        int n = nums.size();
7        for(int i : nums){
8            freq[i]++;
9             if(freq[i] == n/2){
10                return i;
11            }
12        }
13
14      
15
16        
17        return -1;
18    }
19};