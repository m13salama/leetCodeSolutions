#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    int longestPalindrome(string s) {
        init;
        map<char, int> momo;
        int odd=0, res=0;
        for(int i=0; i<s.size(); i++){
            momo[s[i]]++;
        }
        for(auto x:momo){
            if(x.second%2 == 0) res+= x.second;
            else{
                res+=(x.second-1);
                odd = 1;
            }
        }
        return res+odd;
    }
};