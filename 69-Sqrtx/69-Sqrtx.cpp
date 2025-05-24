// Last updated: 5/25/2025, 12:02:07 AM
class Solution {
public:
    int mySqrt(int x) {
       
        
        
        int low = 1; int high=x; 
        while(low<=high){
           long long  mid = low+(high-low)/2;
           long long val = mid*mid;
           // if(arr[mid]*arr[mid] ==x){
               // return arr[mid];
        //    }
             if(val<=(long long)(x)){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return high;
    }
};