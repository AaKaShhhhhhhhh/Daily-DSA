// Last updated: 10/7/2025, 9:14:51 PM
class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> ans(n);
        unordered_map<int , int> last_ava;

       set<int> ava_days;

       for(int i = 0 ; i < n ; i++){
        int lake = rains[i];
        if( lake > 0){
            ans[i] = -1;

            if(last_ava.count(lake)){
                int last = last_ava[lake];

                auto it = ava_days.upper_bound(last);

                if(it == ava_days.end()){
                    return {};
                }
                int dry_day = *it;

                ans[dry_day] = lake;

                ava_days.erase(it);
            }
            last_ava[lake] = i;
        }else{
            ava_days.insert(i);

            ans[i] = 1;
        }
       }
       return ans;
    }
};