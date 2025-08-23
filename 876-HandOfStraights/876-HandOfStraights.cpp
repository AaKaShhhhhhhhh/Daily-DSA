// Last updated: 8/23/2025, 8:09:23 PM
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        
            if(n % groupSize != 0 )return false;
            sort(hand.begin(), hand.end());
            unordered_map<int,int> count;

            for(int i : hand)count[i]++;

            for(int card : hand){
                if(count[card] == 0)continue;

                for(int i = 0 ; i< groupSize; i++){
                    int curr = card+i;
                    if(count[curr] == 0)return false;
                    count[curr]--;
                }


            } 
        return true;
    }
};