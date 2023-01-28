#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    bool isAnagram(string s, string t) {
        init;
        int n=s.size();
        if(n != t.size()) return false;
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for(int i=0; i<n; i++){
            if(s[i] != t[i]) return false;
        }
        
        return true;
    }
};