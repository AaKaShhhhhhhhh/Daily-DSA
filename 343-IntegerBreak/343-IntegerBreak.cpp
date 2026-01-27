// Last updated: 1/27/2026, 10:30:39 PM
1class Solution {
2public:
3    int integerBreak(int n) {
4        if (n == 2) return 1;
5        if (n == 3) return 2;
6
7         int product = 1;
8
9        while (n > 4) {
10            product *= 3;
11            n -= 3;
12        }
13
14        return product * n;
15
16
17        
18    }
19};