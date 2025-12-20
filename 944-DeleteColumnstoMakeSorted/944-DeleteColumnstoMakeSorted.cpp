// Last updated: 12/20/2025, 11:20:19 PM
1class Solution {
2public:
3    int minDeletionSize(vector<string>& strs) {
4        
5        int n = strs.size();
6        int m = strs[0].size();
7        int cnt = 0;
8        for(int j = 0; j < m; j++) {          
9            for(int i = 0; i < n - 1; i++) {  
10                if(strs[i][j] > strs[i + 1][j]) {
11                    cnt++;
12                    break; 
13                }
14            }
15        }
16        return cnt;
17        // for(string s : strs){
18        //     for(char c : s){
19
20        //     }
21        // }
22    }
23};