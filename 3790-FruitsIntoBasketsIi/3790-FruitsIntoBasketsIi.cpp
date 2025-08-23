// Last updated: 8/23/2025, 8:08:55 PM
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int m = baskets.size();
        int unplaced = n;
        vector<bool> used(n,false);
        for(int i :fruits){
            for(int j = 0 ; j < m ; j++){
                if(!used[j] && baskets[j] >= i){
                    used[j] = true;
                    unplaced--;
                    break;
                }
            }
        }
        return unplaced;
    }
};