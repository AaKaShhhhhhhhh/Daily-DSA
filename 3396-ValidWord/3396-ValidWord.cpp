// Last updated: 7/30/2025, 10:46:28 AM
class Solution {
public:
    bool isValid(string word) {
        // for(char c:word){
        //     if(word.length()>=3){
        //         if((c>='A' && c<='Z' ) || (c>='a' && c<='z' ) || (c>='0' && c<='9' )){
        //             if((c=='A' || c=='a')||(c=='E' || c=='e')||(c=='I' || c=='i')||(c=='O' || c=='o')||(c=='U' || c=='u')){
        //                 return true;
        //             }
        //         }
        //     }
            
            
        // }
        // return false;

        if(word.length()<3)return false;
        bool vowel = false;
        bool cons = false;
        for(char c : word){
            if(!isalnum(c))return false;
            if(isalpha(c)){
                char lower = tolower(c);
            if(lower == 'a' || lower=='e'||lower=='i'||lower=='o'||lower=='u'){
                vowel=true;
                }
            else{
                cons=true;
            }

            }
            
        }
        return vowel&&cons;
    }
};