// Last updated: 12/15/2025, 9:55:41 PM
1class Solution {
2public:
3    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
4        int total = 0;      
5        int curr = 0;       
6        int start = 0;      
7
8        for (int i = 0; i < gas.size(); i++) {
9            int diff = gas[i] - cost[i];
10            total += diff;
11            curr += diff;
12
13           
14            if (curr < 0) {
15                start = i + 1;
16                curr = 0;
17            }
18        }
19
20        return (total >= 0) ? start : -1;
21    }
22};