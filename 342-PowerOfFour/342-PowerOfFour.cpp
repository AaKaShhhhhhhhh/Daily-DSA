// Last updated: 8/23/2025, 8:09:35 PM
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