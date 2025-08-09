// Last updated: 8/9/2025, 7:02:53 PM
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