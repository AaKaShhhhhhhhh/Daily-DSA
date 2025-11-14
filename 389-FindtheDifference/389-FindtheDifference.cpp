// Last updated: 11/14/2025, 9:33:12 PM
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char , int> freq;

        for(char c : s){
            freq[c]++;
        }
        for(char c : t){
            if(freq[c] == 0){
                return c;
                
            }
            freq[c]--;
        }
        return 0;
    }
};