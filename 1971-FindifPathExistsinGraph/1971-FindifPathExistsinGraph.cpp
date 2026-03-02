// Last updated: 3/2/2026, 11:52:17 AM
1class Solution {
2public:
3
4    void dfs(int n, vector<vector<int>>& graph, int source, vector<int>& visited){
5
6        visited[source] = 1;
7        for( int nbr : graph[source]){
8
9            if(!visited[nbr]){
10                dfs(n , graph , nbr , visited);
11
12            }
13        }
14        
15
16    }
17    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
18
19        
20        vector<int> visited(n);
21        vector<vector<int>> graph(n);
22
23        for(int i = 0 ; i < edges.size() ; i++){
24            int a = edges[i][0];
25            int b = edges[i][1];
26
27            graph[a].push_back(b);
28            graph[b].push_back(a);       
29            
30             }
31             dfs(n , graph , source,visited);
32             return visited[destination];
33
34    }
35};