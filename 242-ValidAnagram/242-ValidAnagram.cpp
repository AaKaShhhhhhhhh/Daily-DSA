// Last updated: 5/25/2025, 12:01:44 AM
class Solution {
public:
    bool isAnagram(string s, string t) {
      //  int n = s.size(); int m = t.size();
        if(s.size()!=t.size()){
            return false;
        } 
        int arr[26] ={0};

        for(int i = 0 ;i<s.length();i++){
            arr[s[i]-'a']++;

        }
        for(int i = 0 ;i<t.length();i++){
            arr[t[i]-'a']--;

        }
        for(int i = 0 ;i<26;i++){
            if(arr[i]!=0){
                return false;
            }

        }
       return true;
    }
};