// Last updated: 7/30/2025, 10:47:20 AM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n>0 && (n & (n-1)) == 0){
            return true;
        }
        else{
            return false;
        }
    }
};