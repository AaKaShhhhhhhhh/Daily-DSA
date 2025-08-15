// Last updated: 8/15/2025, 10:33:13 AM
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0)return false;
        if(n==1)return true;
        if(n>0){
            return n%4==0 && isPowerOfFour(n/4);
        }
        return false;
    }
};