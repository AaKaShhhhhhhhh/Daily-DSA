// Last updated: 8/23/2025, 8:09:37 PM
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0)return false;
        if(n == 1)return true;
            if(n>0){return n%3==0 &&  isPowerOfThree(n/3);
            }else{return false;}  
 
            
        }
};