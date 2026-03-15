// Last updated: 3/15/2026, 6:09:15 PM
1class Solution {
2public:
3    int firstUniqueEven(vector<int>& nums) {
4
5        int n = nums.size();
6        unordered_map<int , int> freq;
7        
8
9        for(int i : nums){
10            freq[i]++;
11        }
12        for(int i : nums){
13            if( i % 2 == 0 and freq[i] == 1){
14                return i;
15            }
16        }
17        return -1;
18    }
19};