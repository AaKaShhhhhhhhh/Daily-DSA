// Last updated: 2/26/2026, 6:59:57 PM
1class Solution {
2public:
3    bool checkInclusion(string s1, string s2) {
4        
5        int i = 0 ;
6        int j = 0;
7        int k = s1.size();
8        unordered_map<char , int> mp;
9        
10
11        for( char c : s1){
12            mp[c]++;
13        }
14        int cnt = mp.size();
15
16        while( j< s2.size()){
17
18            if(mp.count(s2[j])){
19                mp[s2[j]]--;
20
21                if(mp[s2[j]] == 0){
22                cnt--;
23            }
24            }
25            
26
27            if(j-i+1 < k){
28                j++;
29            }
30            else if( j -i+1 ==k ){
31
32                if(cnt ==0){
33                    return true;
34                    break;
35                }
36                    if( mp.count(s2[i])){
37
38                        mp[s2[i]]++;
39
40                    if(mp[s2[i]] == 1){
41                        cnt++;
42
43                    }
44  
45                    
46                }
47                i++;
48                j++;
49
50            }
51        }
52        return false;
53    }
54};