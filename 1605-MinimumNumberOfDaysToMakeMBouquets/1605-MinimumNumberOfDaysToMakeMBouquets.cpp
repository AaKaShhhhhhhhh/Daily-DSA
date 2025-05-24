// Last updated: 5/25/2025, 12:01:26 AM
class Solution {
public:

    bool poss(vector<int>& arr , int mid , int m , int k){
        int n = arr.size();
        int cnt = 0;
        int noofb = 0;

        for(int i=0 ; i < n ;i++){
            if(arr[i]<= mid){
                cnt++;
            }
            else{
                noofb += (cnt/k);
                cnt = 0;
            }
            
        }
        noofb += (cnt/k);
            return noofb>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n   = bloomDay.size();
        long long val = m * 1ll * k * 1ll;
        if(val>n){
            return -1;
        }
        int mini = INT_MAX; 
        int maxi = INT_MIN;
        for(int i = 0; i < n ;i++){
            maxi = max(maxi,bloomDay[i]);
            mini = min(mini , bloomDay[i]);
        }
        if(m*k > n){
                return -1;
            }
        int low = mini; 
        int high = maxi; 
        while(low<=high){
            int mid = low+(high - low)/2;
            
            if(poss(bloomDay,mid,m,k)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }

        }
        return low;
    }
};