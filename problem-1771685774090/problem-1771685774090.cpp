// Last updated: 2/21/2026, 8:26:14 PM
1class Solution {
2public:
3    int countPrimeSetBits(int left, int right) {
4
5        int mask = (1<<2)|(1<<3)|(1<<5)|(1<<7)|(1<<11)|(1<<13)|(1<<17)|(1<<19);
6        int cnt = 0;
7        for(int i = left ; i<=right ; i++){
8
9            int bits =  __builtin_popcount(i);
10
11            if((mask>>bits) & 1){
12                cnt++;
13            }
14        }
15        
16
17    return cnt;
18    //     int cnt = 0;
19        
20    //       for(int i = left ; i <=right ; i++){
21    //        int num = helper(i);
22
23    //         for(int j = 2 ; j*j <= num ; j++){
24    //             if(num%j!=0){
25    //                 cnt++;
26    //             }
27    //         }
28    //       }      
29    //     return cnt;
30    // }
31
32    // int helper(int n){
33
34    //     string bits = "";
35    //     int cnt = 0;
36    //     for (int i = 31; i >= 0; i--) {
37    //     int k = n >> i;
38    //     if (k & 1)
39    //         bits += '1';
40    //     else
41    //         bits += '0';
42    // }  
43
44    //  for(char c : bits){
45    //     if(c == '1'){
46    //         cnt++;
47    //     }
48    //  }  
49    //  return cnt;                                                                   
50    }
51};