// Last updated: 5/25/2025, 12:01:35 AM
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }  
        int n = s.size(); 
     
        
        for(int i=0;i<n;++i){
         char res = s[0];
         s.erase(s.begin());
         s.push_back(res);
         if(s == goal){return true;} 
       }
       return false;
          }
};