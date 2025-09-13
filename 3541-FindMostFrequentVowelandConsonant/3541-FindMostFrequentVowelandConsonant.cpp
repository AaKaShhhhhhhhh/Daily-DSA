// Last updated: 9/13/2025, 7:22:29 PM
class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> map;

        for(char c : s){
            map[c]++;
        }
        int volmax = 0;
        int conmax = 0;
        for(auto &p : map){
            char c = p.first;
            int freq = p.second;
            if( c == 'a' || c == 'e'|| c == 'i' ||c == 'o'||c == 'u'){
                volmax = max(volmax , freq);
            }else{
                conmax = max(conmax , freq);
            }
        }
        return volmax + conmax;
    }
};