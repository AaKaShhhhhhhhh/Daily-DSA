// Last updated: 10/1/2025, 7:00:31 PM
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int n = numBottles ;
        int x = numExchange ; 

        return n+(n-1)/(x-1);
    }
};