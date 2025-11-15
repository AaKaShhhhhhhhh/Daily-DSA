// Last updated: 11/15/2025, 7:00:06 PM
class Solution {
public:
    int numberOfSubstrings(string s) {
        // int n = s.size();
        // long long cnt = 0 ;
        // for(int i = 0 ; i < n ; i++){
        //     int one = 0 ;  int zero = 0;
        //     for(int j = i; j < n && (j - i + 1) <= 500; j++ ){
        //         if(s[j] == '1'){one++;}
        //         else{zero++;}

        //         if(one >= zero*zero){
        //             cnt++;
        //         }
        //         // else if(1LL*zero*zero > n){
        //         //     break;
        //         // }
        //     }
        // }
        // return cnt;
       vector<int> c1 = {0};
        int c0 = 0, c1c = 0, ans = 0;
        for (char c : s) {
            if (c == '1') c1c++;
            else {
                c0++;
                c1.push_back(c1c);
            }
            ans += c1c - c1[c0];
            for (int x = c0 - 1; x >= 0; --x) {
                int z = c0 - x;
                if (z * z > c1c) break;
                int hi = c1c - c1[x];
                int lo = c1c - c1[x + 1];
                if (hi < z * z) continue;
                ans += hi - max(lo, z * z) + 1;
            }
        }
        return ans;
      }
};