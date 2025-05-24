// Last updated: 5/25/2025, 12:01:30 AM
class Solution {
public:
    int dayss(vector<int>& weights, int cap){
        int day = 1;
        int load = 0;
        int n = weights.size();
        for(int i=0; i<n; i++){
            if(load+weights[i]>cap){
                day+=1;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
            
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while(low<=high){
            int mid = low+(high-low)/2;
            int b = dayss(weights,mid);
            if(b<=days){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};