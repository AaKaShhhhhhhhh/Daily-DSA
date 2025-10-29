// Last updated: 10/29/2025, 9:40:31 PM
class Solution {
public:
    int smallestNumber(int n) {

        int x  = 1;
        while(x-1 < n){
            x<<= 1;
        }
        return x-1;
    }
};