// Last updated: 11/2/2025, 6:28:27 PM
class Solution {
public:
    int possibleStringCount(string word) {
        int cnt = 1;

        for (int i = 0; i < word.size() - 1; i++) {
            if(word[i] == word[i+1]){
                cnt++;
                word.erase(i ,1);
                i--;
            }
        }
        return cnt;
    }
};