// Last updated: 7/30/2025, 10:46:46 AM
class Solution {
public:
    int findLucky(vector<int>& arr) {
       
       int freq[501] = {0};

       for(int i=0; i<arr.size() ; i++){
            int num = arr[i];
            freq[num]++;

       }
       int luc = -1;
       for(int i=1 ; i<501 ; i++){
        if(freq[i] == i){
            luc = max(luc,i);
        }
       }
        return luc;
    }
};