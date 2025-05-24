// Last updated: 5/25/2025, 12:02:18 AM
class Solution {
public:
    bool isPalindrome(int x) {
        int count = 0;
        int temp = x;
        while(x>0){
            int j = x %10;
           
            if(count<INT_MIN/10||count>INT_MAX/10){
                return false;
            }
            
            count = count*10+j;
             x = x/10;
        }
        return count == temp;
    }
};