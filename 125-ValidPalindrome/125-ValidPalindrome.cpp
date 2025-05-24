// Last updated: 5/25/2025, 12:01:57 AM
class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int length = s.size();
        int end = length-1;
        int start = 0;
        while(start<=end){
            if(!isalnum(s[start])){start++; continue;}
            if(!isalnum(s[end])){end--; continue;}
            if(tolower(s[start])!=tolower(s[end])){return false;}
            else{start++;end--;}
        }
        return true;

    }
};