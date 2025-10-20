// Last updated: 10/20/2025, 5:08:28 PM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int cnt = 0;
        
        for(string c : operations ){
            if( c == "X++" ||  c== "++X"){
                cnt++;
            }else{
                cnt--;
            }
        }
        return cnt;
    }
};