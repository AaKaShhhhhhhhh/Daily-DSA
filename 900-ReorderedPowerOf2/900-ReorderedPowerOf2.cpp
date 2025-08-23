// Last updated: 8/23/2025, 8:09:21 PM
class Solution {
public:
    bool reorderedPowerOf2(int n) {
        // unordered_map<int,int> freq;

        // int cnt = 0;
        // while(n>0){
        //     int digits = n%10;
        //     freq[digits]++;
        //     cnt++;
        //     n/=10;
        // }
        // for(int i : freq){

        // }
        string str = to_string(n);
        sort(str.begin() , str.end());
        for(int i = 0 ; i<30 ; i++){
            int pow = 1<<i;

            string s = to_string(pow);
            sort(s.begin() , s.end());
            if(s == str)return true;
        }
        
        return false;
    } 
};