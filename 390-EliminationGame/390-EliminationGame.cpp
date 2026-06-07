// Last updated: 6/7/2026, 10:34:10 PM
1class Solution {
2public:
3    int lastRemaining(int n) {
4        
5        if(n ==1)return 1;
6
7        return 2*( ( n/2 + 1 ) - lastRemaining(n/2));
8    }
9
10  
11};