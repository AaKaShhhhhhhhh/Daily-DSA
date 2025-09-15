// Last updated: 9/15/2025, 9:10:25 PM
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> broken(26,false);
         for (char c : brokenLetters) broken[c - 'a'] = true;
         int cnt = 0;
         int type = true;
          for (int i = 0; i <= text.size(); i++){
            if(i == text.size() || text[i] == ' ' ){
                if(type){
                    cnt++;
                    
                }
                type = true;
            }else if(broken[text[i] - 'a']){
                type = false;
            }
          }
        return cnt;

    }
};