// Last updated: 10/10/2025, 7:29:37 PM
class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int maxi = INT_MIN;
        
        int n = energy.size();
        for(int i = n-1 ; i >= n-k ; i--){
            int sum = 0;
            for(int j = i ; j>= 0 ; j-=k){
                sum += energy[j];
                maxi = max(maxi , sum);
            }
        }
        return maxi;

        // for(int i = 0 ; i < energy.size() ; i++){
        //     if(k<energy.size()){
        //     sum  = energy[i] + energy[k];
            
        //     }
        //     else{
        //         return min(arr[i]);
        //     }
        //     maxi = max(maxi , sum);
           
            
        // }
        // return maxi;
    }
};