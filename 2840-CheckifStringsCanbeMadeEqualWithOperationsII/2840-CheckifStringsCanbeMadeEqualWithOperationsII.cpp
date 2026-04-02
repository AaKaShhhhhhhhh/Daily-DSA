// Last updated: 4/2/2026, 1:20:30 PM
1class Solution {
2public:
3    bool checkStrings(string s1, string s2) {
4        unordered_map<char , int> even1 , odd1;
5        unordered_map<char , int> even2 , odd2;
6       
7        for(int i = 0; i < s1.size() ; i++){
8            if(i%2 != 0){
9                odd1[s1[i]]++;
10                odd2[s2[i]]++;
11            }else{
12                even1[s1[i]]++;
13                even2[s2[i]]++;
14            }
15        }
16
17
18        if(even1 == even2 and odd1 == odd2){
19            return true;
20        }
21        // for(auto &p : even1){
22        //     for(auto &s : even2){
23        //         if(p.second != s.second){
24        //             flag1 =false;
25        //         }
26        //     }
27        // }
28
29        // for(auto &p : odd1){
30        //     for(auto &s : odd2){
31        //         if(p.second != s.second){
32        //             flag2 =false;
33        //         }
34        //     }
35        // }
36
37        
38     //   if(even1.size() == even2.size() and odd1.size() == odd2.size())
39        // for(int i = 0 ; i < even1.size() ; i++){
40        //     for(int j = 0 ; j <even1.size()  ; j++){
41        //         if(even1[i] == even2[j] and odd1[i] == odd2[j]){
42        //         return true;
43        //     }
44        //     }
45            
46        // }
47        
48        return false;
49
50    }
51};