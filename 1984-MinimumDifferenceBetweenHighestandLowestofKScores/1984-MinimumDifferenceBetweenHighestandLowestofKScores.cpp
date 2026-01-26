// Last updated: 1/26/2026, 10:55:35 AM
1class Solution {
2public:
3    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
4        
5        int n = arr.size();
6        sort(arr.begin() , arr.end());
7
8        int a = 0 ;
9        int b = 1;
10      //  int dif = 0;
11        int mini = INT_MAX;
12        vector<vector<int>> ans;
13
14        while( b < n ){
15           // dif = abs(arr[b] - arr[a]);
16            mini = min(mini , abs(arr[b] - arr[a]));
17           // smallestdif = mini;
18
19           // if(smallestdif < )
20           a++;
21           b++;
22           
23        }
24        for(int i = 1 ; i < n ; i ++){
25
26            if(abs(arr[i] - arr[i-1]) == mini){
27            ans.push_back({arr[i-1] , arr[i]});
28            
29           }
30
31        }
32        
33        return ans;
34         
35    }
36};