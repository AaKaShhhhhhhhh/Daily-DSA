// Last updated: 7/30/2025, 10:46:48 AM
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int left = 0;
        int right = 0;
        int freq = 0; 
        int cnta = 0; int cntb = 0; int cntc = 0;
        for(right =0 ; right <n ; right++){
            if(s[right] == 'a')cnta++;
            else if(s[right] == 'b')cntb++;
            else if(s[right] == 'c')cntc++;

            while(cnta>0 && cntb>0 && cntc>0){
                freq += n-right;
                 if(s[left] == 'a')cnta--;
            else if(s[left] == 'b')cntb--;
            else if(s[left] == 'c')cntc--;
            left++;
            }
           



        //     if(s[right] == 'a' || s[right] == 'b' || s[right] == 'c'){
        //     right++;
        //     cnt++;
            
        // }
        // while(cnt>=3){
        //     freq++;
        // }
        //     left++;

         }
         return freq;

    }
};