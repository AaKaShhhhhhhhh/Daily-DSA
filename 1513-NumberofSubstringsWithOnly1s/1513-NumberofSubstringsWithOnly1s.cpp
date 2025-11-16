// Last updated: 11/16/2025, 12:44:38 PM
class Solution {
public:
    int numSub(string s) {
        const long long MOD = 1000000007;
        long long cnt = 0;
        long long res = 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '1'){
                cnt++;
                res = (res + cnt) % MOD;
            }else{
                cnt = 0;
            }
        }
        return res;
    }
};