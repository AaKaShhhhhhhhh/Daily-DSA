// Last updated: 2/16/2026, 6:41:01 PM
1class Solution {
2public:
3    int reverseBits(int n) {
4       
5        
6        long long res = 0;
7        for(int i = 0 ; i < 32 ; i++){
8            
9            res<<=1;
10            res |= (n&1);
11            n>>=1;
12
13        }
14        return res;
15    }
16};