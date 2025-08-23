// Last updated: 8/23/2025, 8:09:22 PM
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives  = 0;
        int tens = 0 ;
        int n = bills.size();
        for(int i = 0 ; i < n  ; i++){
            if(bills[i] == 5)fives++;
             else if(bills[i] == 10 ){    
                if(fives>0){
                     tens++;
                    fives--;
                }else{
                    return false;
                }     
                   
                }
            
            else {
                if(fives >0 && tens>0){
                    fives--;
                    tens--;
                }
                else if(fives>=3){
                    fives-=3;
                }
                else{
                    return false;
                }
                
                    }
                
            
        }
       
        return true;
    }
};