// Last updated: 12/4/2025, 6:49:25 PM
1class Solution {
2public:
3    int countCollisions(string directions) {
4        int n = directions.size();
5        int cnt = 0;
6        int i = 0 ; int j = n-1;
7        while( i < n && directions[i] == 'L')i++;
8        while( j >= 0 && directions[j] == 'R')j--;
9
10        for(int k = i ; k <= j ; k++){
11            if(directions[k] == 'L' || directions[k] == 'R'){
12                cnt++;
13            }
14        }
15        return cnt;
16        // for(int i = 0 ; i < n ; i++){
17        //   //  for(int j = i+1 ; j < n ; j++){
18        //         if( directions[i] == 'R' && directions[i+1] == 'L'){
19        //             cnt+=2;
20        //         }
21        //         else if(directions[i] == 'R' && directions[i+1] == 'S'){
22        //             cnt+=1;
23        //             directions[i] = 'S';
24        //         }
25        //         else if(directions[i] == 'S' && directions[i+1] == 'L'){
26        //             cnt+=1;
27        //             directions[i+1] = 'S';
28        //         }else{
29        //             continue;
30        //         }
31        //         // else if(directions[i] == 'L' && directions[i+1] == 'R'){
32        //         //     cnt+=2;
33                    
34        //         // }
35        //  //   }
36
37        // }
38        // return cnt;
39    }
40};