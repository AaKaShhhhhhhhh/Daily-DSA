// Last updated: 3/5/2026, 10:13:12 PM
1class Solution {
2public:
3    int reverse(int x) {
4        int count=0 ;
5        while(x!=0){
6            int j = x % 10;
7             x=x/10;
8            if(count<INT_MIN/10 || count>INT_MAX/10){
9                return 0;
10            }
11            count = count*10+j;
12           
13        }
14        return count;
15    }
16};