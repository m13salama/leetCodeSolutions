class Solution {
public:
    bool isPalindrome(string s) {
        int l=0, r=s.size()-1;
        while(l < r){
            s[l] = tolower(s[l]);
            s[r] = tolower(s[r]);
            if(iswalnum(s[l]) && iswalnum(s[r])){
                if(s[l] == s[r]){
                    l++;
                    r--;
                }else{
                    return false;
                }
            }else if(!iswalnum(s[l])) l++;
            else if(!iswalnum(s[r])) r--;
        }
        return true;
    }
};