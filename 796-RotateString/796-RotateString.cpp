// Last updated: 5/3/2026, 9:15:06 PM
1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        if(s.size()!=goal.size()){
5            return false;
6        }  
7        int n = s.size(); 
8     
9        
10        for(int i=0;i<n;++i){
11         char res = s[0];
12         s.erase(s.begin());
13         s.push_back(res);
14         if(s == goal){return true;} 
15       }
16       return false;
17          }
18};