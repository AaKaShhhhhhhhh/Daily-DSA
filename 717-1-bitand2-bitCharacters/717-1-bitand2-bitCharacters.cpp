// Last updated: 11/18/2025, 12:44:11 PM
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        //for(int i = 0 ; i < n ; i ++){
    //         if(n == 2 && bits[0]==0)return true;
    //         if(n%2 !=0 && bits[n-1] == 0){
    //             return true;
    //         }else if(n%2 !=0 && bits[n-1] != 0){
    //             return false;
    //         }
    //    // }
    //     return false;
    int i = 0;
    if(n==1)return true;
    while(i < n-1){
        
        if(bits[i] == 0){
        i+=1;  
    }
    else if(bits[i] == 1){
        i+=2;    
    }
    if(i == n-1){
        return true;
        }
    
    }
    return false;
    }
};