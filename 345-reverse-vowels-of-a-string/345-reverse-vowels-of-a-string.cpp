const static auto fast = []{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    string reverseVowels(string s) {
        int l=0, r=s.size()-1;
        while(l<r){
            char x = tolower(s[l]);
            char y = tolower(s[r]);
            if(isVowel(x) && isVowel(y)){
                s[l] = s[l]^s[r];
                s[r] = s[l]^s[r];
                s[l] = s[l]^s[r];
                l++; r--;
            }else if(isVowel(x)) r--;
            else if(isVowel(y)) l++;
            else {r--; l++;}
        }
        return s;

    }
    bool isVowel(char c){
        if(c=='a' || c=='i' || c=='o' || c=='u' || c=='e') return true;
        return false;
    }
};