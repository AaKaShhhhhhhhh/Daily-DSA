// Last updated: 12/8/2025, 12:36:59 PM
1class Solution {
2public:
3    int countTriples(int n) {
4        int  cnt = 0;
5        for(int i = 1 ; i <= n ; i++){
6            for(int j =1 ; j <=n ; j++ ){
7                int val = i*i + j*j;
8                int k = sqrt(val);
9                if( k*k == val && k<= n){
10                    cnt++;
11                }
12            }
13        }
14        return cnt;
15        // int i =0 ; int j = i+1 ; int k = i+2;
16        
17        // for(int i =0 ; i <= n ; i++){
18        // //     int a = i;
19        // //     int b = i+1;
20        // //     int c = 
21        // //     if(pow(a,2) + pow(b,2) == pow(c,2)){
22        // //         cnt++;
23        // //     }else{
24        // //         c++;
25        // //     }
26        // //     b++;
27        // // }
28    }
29};