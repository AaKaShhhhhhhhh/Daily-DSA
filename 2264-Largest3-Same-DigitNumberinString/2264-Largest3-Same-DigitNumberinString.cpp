// Last updated: 8/14/2025, 5:53:04 PM
class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        
        string ans = "";
        for(int i = 0 ; i+2 < n ; i++){
            if(num[i] == num[i+1] && num[i] == num[i+2]){
                 string s = num.substr(i,3);
                 if(s>ans)ans = s;
            }
            
        }
        return ans;
    //     unordered_map<char,int> map;
    //     int sum = 0;
    //     string s;
    //     for(int i : num){ 
    //         map[i]++;
    //          if(map.second == 3){
    //             sum +=i*3;
    //             s+=i
    //          }
             
    //          maxi = max(maxi,sum);
    //     }
        
    //    return s;
    }
};