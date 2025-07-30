// Last updated: 7/30/2025, 10:46:43 AM
class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = 0;
        
        // for(int i =0 ; i< n ; i++){
        //     ans = start+2*i;
        //     arr.push_back(ans);

        // }
        // int sum = 0;
        for(int i = 0; i<n ; i++){
            ans ^= (start+2*i);
        }
        return ans;
    }
};