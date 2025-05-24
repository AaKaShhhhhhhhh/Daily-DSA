// Last updated: 5/25/2025, 12:02:19 AM
class Solution {
public:
    int reverse(int x) {
        int count=0 ;
        while(x!=0){
            int j = x % 10;
             x=x/10;
            if(count<INT_MIN/10 || count>INT_MAX/10){
                return 0;
            }
            count = count*10+j;
           
        }
        return count;
    }
};