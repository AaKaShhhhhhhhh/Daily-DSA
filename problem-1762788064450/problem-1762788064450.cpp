// Last updated: 11/10/2025, 8:51:04 PM
class Solution {
public:
    int addDigits(int num) {
       // int ans = 0;
       // int cnt = 0;
        if(num<9)return num;
        while(num>9){
            int dig = num % 10;
            num = num/10;
           num = num + dig;
            //cnt++;
        }
        return num;
    }
};