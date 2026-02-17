// Last updated: 2/17/2026, 9:21:38 PM
1class Solution {
2public:
3    vector<string> readBinaryWatch(int turnedOn) {
4        
5        vector<string> ans;
6        for(int i = 0 ; i < 12 ; ++i){
7            for(int j = 0 ; j <60 ; ++j){
8
9                int bit = __builtin_popcount(i) + __builtin_popcount(j);
10
11                if(bit == turnedOn){
12                    
13                    string time = to_string(i) + ":";
14
15                    if(j < 10){
16                        time += '0';
17                    }
18
19                    time += to_string(j);
20                    ans.push_back(time);
21                }
22            }
23        }
24     return ans;
25    }
26};