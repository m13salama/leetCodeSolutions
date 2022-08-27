#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        init;
        map<char,char> momo1;
        map<char,char> momo2;

        int n=s.size();
        for (int i=0; i<n; i++){
            if(momo1[s[i]] == momo2[t[i]] && momo1[s[i]] == 0){
                momo1[s[i]] = t[i];
                momo2[t[i]] = s[i];
            }else if(momo1[s[i]] == t[i] && momo2[t[i]] == s[i]) continue;
            else{
                return false;
            }
        }
        return true;

    }
};