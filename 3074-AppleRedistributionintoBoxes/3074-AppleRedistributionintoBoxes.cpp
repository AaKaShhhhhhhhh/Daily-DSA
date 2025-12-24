// Last updated: 12/24/2025, 10:56:55 PM
1class Solution {
2public:
3    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
4       // sort(capacity.begin() , capacity.end());
5
6        int sol = 0 ;
7        int sum = 0;
8        for(int i = 0 ; i < apple.size() ; i++){
9            sum = sum + apple[i];
10        }
11         sort(capacity.begin(), capacity.end(), greater<int>());
12        for(int i = 0 ; i < capacity.size() ; i++){
13            sum -= capacity[i];
14            sol++;
15            if(sum <= 0)break;
16        }
17        return sol;
18    }   
19};