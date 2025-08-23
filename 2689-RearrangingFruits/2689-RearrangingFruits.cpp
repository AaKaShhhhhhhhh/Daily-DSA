// Last updated: 8/23/2025, 8:08:58 PM
class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        int n = basket1.size();
        int m = basket2.size();

        unordered_map<int , int> freq;

        for(int i : basket1)freq[i]++;
        for(int i: basket2)freq[i]--;
        vector<int> extra;
        int smol = INT_MAX;
        for(auto[num,f] : freq){
            smol = min(smol,  num);
            if(f%2!=0){
                return -1;
            }
            int moves = abs(f)/2;
            for(int i = 0; i<moves ; i++){
                extra.push_back(num);
            }
        }
        sort(extra.begin() , extra.end());
        long long ans = 0;

        for(int i = 0; i<extra.size()/2 ; i++){
            ans+=min(extra[i] , 2*smol);
        }
        return ans;
    }
};