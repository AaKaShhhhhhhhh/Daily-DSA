// Last updated: 9/23/2025, 5:53:39 PM
class Solution {
public:
    int compareVersion(string version1, string version2) {
        int p1 = 0;
        int p2 = 0;
        int n = version1.size();
        int m = version2.size();

        while(p1<n || p2<m){
            long num1 = 0;
            long num2 = 0;

            while(p1<n && version1[p1]!='.' ){

                num1 = num1*10+(version1[p1]-'0');
                p1++;
            }
            while(p2<m && version2[p2]!='.'){

                num2 = num2*10+(version2[p2]-'0');
                p2++;
            }
            if(num1<num2)return -1;
            if(num1>num2)return 1;
            p1++;
            p2++;
            }
        // string s;
        // for(char c : version1){
        //    if(c == '.'){
        //     s = substr(c , version1.end());
        //    }
        //     p1 = to_int(s); 
        // }
        //  for(char c : version2){
        //    if(c == '.'){
        //     s = substr(c , version1.end());
        //    }
        //     p2 = to_int(s); 
        // }
        // if(p1<p2)return -1;
        // else return 1;
        // return 0;
        return 0;
    }
};