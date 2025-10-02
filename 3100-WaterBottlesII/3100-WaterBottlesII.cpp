// Last updated: 10/2/2025, 7:24:37 PM
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int init = numBottles;
        int end = numBottles;
        int x = numExchange;
        while(end>=x){
            end-=x;
            x++;
            init++;
            end++;
        }
        return init;

    }
};