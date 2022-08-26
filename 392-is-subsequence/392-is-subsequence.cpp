#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    bool isSubsequence(string s, string t) {
        init;
        int p1=0, p2=0;
        while(p1<s.size() && p2<t.size()){
            if(s[p1] == t[p2]){ p1++; p2++;}
            else{ p2++; }
        }
        return p1==s.size()? true: false;

    }
};