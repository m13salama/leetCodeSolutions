#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    bool isPalindrome(string s) {
        init;
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