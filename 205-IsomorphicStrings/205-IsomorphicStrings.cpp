// Last updated: 5/25/2025, 12:01:49 AM
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        if(s.size()!=t.size()){
            return false;
        }

        for(int i = 0; i<n; i++){
            int c1 = s[i]; int c2 = t[i];
                for(int j=0;j<n;j++){
                        if(s[j] == c1 && t[j]!= c2){
                            return false;
                        }
                         if(t[j] == c2 && s[j]!= c1){
                            return false;
                        }

                }
                    }
         return true;
        
    }
};