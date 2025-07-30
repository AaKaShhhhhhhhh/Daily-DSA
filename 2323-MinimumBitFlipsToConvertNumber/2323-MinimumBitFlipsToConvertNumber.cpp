// Last updated: 7/30/2025, 10:46:33 AM
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt = 0;
        int ans = start^goal;
        for(int i=0 ; i<31 ; i++){
            if(ans&(1<<i)){
                cnt++;
            }
        }
        
        
        return cnt;
    }
};