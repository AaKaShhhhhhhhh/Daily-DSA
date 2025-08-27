// Last updated: 8/27/2025, 6:25:31 PM
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> map;
        unordered_map<string,char> map2;
        int i = 0 ; int n = s.size();
        for(char c : pattern){
            if(i >= n)return false;

            int j = i;
            while(j < s.size() && s[j]!= ' '){
                j++;
               
            }
             string word = s.substr(i , j-i);
             i = j+1;

             if((map.count(c) && map[c]!=word) || 
             (map2.count(word)&& map2[word]!=c)){
              return false;
             }
               map[c] = word;
                map2[word] = c;
        }
       return i >n;


    }
};