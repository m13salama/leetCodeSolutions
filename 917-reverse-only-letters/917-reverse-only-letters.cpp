const static auto fast = []{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l=0, r=s.size()-1;
        while(l < r){
            if(iswalpha(s[l]) && iswalpha(s[r])){
                swap(s[l],s[r]);
                l++; r--;
            }else if(!iswalpha(s[l])) l++;
            else if(!iswalpha(s[r])) r--;
        }
        return s;
    }
};