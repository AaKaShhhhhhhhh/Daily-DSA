// Last updated: 11/7/2025, 9:32:50 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() -1 ;
        int temp = 0;
        while(i<j){
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
       // return s;
    }
};