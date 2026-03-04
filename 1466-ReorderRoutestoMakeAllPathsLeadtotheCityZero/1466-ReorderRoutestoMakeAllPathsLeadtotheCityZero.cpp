// Last updated: 3/4/2026, 9:32:30 PM
1class Solution {
2public:
3    int minReorder(int n, vector<vector<int>>& connections) {
4    
5        vector<vector<int>> forw(n);
6        vector<vector<int>> backw(n);
7        vector<int> visited(n);
8        for(int i = 0 ; i < connections.size() ; i++){
9
10            int a = connections[i][0];
11            int b = connections[i][1];
12
13            forw[a].push_back(b);
14            backw[b].push_back(a);   
15        }
16        int ans = 0;
17        dfs(0 , forw , backw , visited  , ans);
18
19        return ans;
20    }
21
22    void dfs(int node , vector<vector<int>>& forw , vector<vector<int>> &backw , vector<int> &visited , int &ans){
23
24        visited[node] = 1;
25
26        for(int nbr : forw[node]){
27            if(visited[nbr] != 1){
28                ans+=1;
29               
30                dfs( nbr , forw , backw , visited ,ans);
31            }
32        }
33
34        for(int nbr : backw[node]){
35            if(visited[nbr] != 1){
36                dfs( nbr , forw , backw , visited,ans);
37            }
38        }
39
40    }
41};