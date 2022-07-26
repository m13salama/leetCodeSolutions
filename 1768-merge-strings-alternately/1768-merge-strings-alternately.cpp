const static auto fast = []{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int p1=0, p2=0;
        string s= "";
        while(p1<word1.size() && p2<word2.size()){
            s = s+word1[p1]+word2[p2];
            p1++; p2++;
        }
        while(p1<word1.size()) s = s+word1[p1++];
        while(p2<word2.size()) s = s+word2[p2++];
        return s;

    }
};