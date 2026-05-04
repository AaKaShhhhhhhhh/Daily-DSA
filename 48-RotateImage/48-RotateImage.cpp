// Last updated: 5/4/2026, 6:16:26 PM
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        int n = matrix.size();
5        
6        for(int i=0;i<n;i++){
7            for(int j=i+1;j<n;j++){
8                swap(matrix[i][j],matrix[j][i]);
9
10            }
11            int start = 0;
12        int end = n-1;
13        while(start<end){
14            swap(matrix[i][start],matrix[i][end]);
15            start++;
16            end--;
17
18        }
19           
20        }
21        //for(int i=0;i<n;i++){
22           // int start = 0;
23        //int end = n-1;
24            //while(start<end){
25               //  swap(matrix[i][start],matrix[i][end]);
26               // start++;
27              //  end--;
28         
29            //}
30       // }
31
32    }
33};