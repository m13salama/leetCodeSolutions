class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty())return false;
        int i=0;
        int j=s.length()-1;
        while(i<=j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i])==tolower(s[j])){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};