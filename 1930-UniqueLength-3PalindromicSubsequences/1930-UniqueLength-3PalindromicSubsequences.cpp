// Last updated: 11/21/2025, 7:02:23 PM
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        
        vector<int> first(26,-1) , last(26,-1);

        for(int i = 0 ; i < n ; i++){
            int c = s[i] -'a';
            if(first[c] == -1){
                first[c] = i;
            } 
            last[c] = i;
        }
        int ans = 0;
            for(int c = 0 ; c < 26 ; c++){
                  
                    bool seen[26] = {false};

                    if(first[c] == -1 || first[c] == last[c])continue;
                for(int j = first[c] + 1 ; j < last[c] ; j++){

                    seen[s[j] - 'a'] = true; 
                    
            }
            ans+= count(seen , seen+26 , true);
            }
        return ans;
          
        


        // for(auto &p : s){
        //     freq[p]++;

        // }
        // int cnt = 0;
        // for(int i = 0 ; i < n ; i++){
        //     for(int j = i ; j <n ; j++){
        //         if(s[i] == s[j]){
        //             cnt = j-i+1;
        //         }
        //     }
        // // }
        // }
        // return cnt;
        
    }
};