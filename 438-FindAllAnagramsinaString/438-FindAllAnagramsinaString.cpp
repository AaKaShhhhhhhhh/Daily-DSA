// Last updated: 2/22/2026, 6:40:01 PM
1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4
5        unordered_map<char , int> map;
6
7        for(char c : p){
8            map[c]++;
9        }
10
11         int i = 0 ; 
12         int j = 0;
13        int cnt = map.size();
14        vector<int> ans ;
15
16        while( j < s.size()){
17
18            if(map.count(s[j])){
19                map[s[j]]--;
20                if(map[s[j]] == 0){
21                cnt--;
22            }
23
24            }
25
26
27            if( j-i+1 < p.size()){
28                j++;
29                
30            }
31            else if(j-i+1 == p.size()){
32                if(cnt==0){
33                    ans.push_back(i);
34                }
35
36                
37            if(map.count(s[i])){
38                map[s[i]]++;
39
40                if(map[s[i]] == 1){
41                cnt++;
42            }
43
44            }
45            
46                
47                i++;
48                j++;
49            }
50
51        }
52        return ans;
53        
54    }
55};