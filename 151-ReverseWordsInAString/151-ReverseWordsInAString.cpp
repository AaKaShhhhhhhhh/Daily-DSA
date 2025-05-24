// Last updated: 5/25/2025, 12:01:55 AM
class Solution {
public:
    string reverseWords(string s) {
        string temp ="";
        string ans ="";
        int left = 0 ; int right = s.length()-1;
        while (left <= right && s[left] == ' ') left++;
        while (right >= left && s[right] == ' ') right--;

        
        while(left<=right){
            char ch = s[left];
            if (ch != ' ') {
    temp += ch;
} else if (!temp.empty()) {
    if (!ans.empty()) ans = temp + " " + ans;
    else ans = temp;
    temp = "";
}
           left++;
           
        }
        if (ans!="") ans = temp + " " + ans;
        else ans = temp;
        temp = "";
        return ans;
    }
};