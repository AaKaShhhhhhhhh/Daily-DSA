// Last updated: 5/25/2025, 12:01:34 AM
class Solution {
public:
    int findmax(vector<int>& piles){
        int n = piles.size();
        int maxi = INT_MIN;
        for(int i =0; i<n;i++){
            maxi = max(maxi,piles[i]);
        }
        return maxi;
    }

    int countmaxhours(vector<int> &piles, int hourly) {
    long long totalH = 0;
    int n = piles.size();
    
    for (int i = 0; i < n; i++) {
        totalH += ceil((double)(piles[i])/(double)(hourly));
    }
    return totalH;
}
    int minEatingSpeed(vector<int> piles, int h) {
        long long low=1;
        long long high=findmax(piles);
        int totalh=0;
        
        while(low<=high){
           int mid = low+(high-low)/2;
           totalh = countmaxhours(piles,mid);
            
            if(totalh>0 && totalh<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return low;
    }
};