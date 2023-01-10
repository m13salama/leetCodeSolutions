#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    char repeatedCharacter(string s) {
        init;
        map<char, int> momo;
        
        int n= s.size();
        
        for(int i=0; i<n; i++){
            momo[s[i]]++;
            if(momo[s[i]] == 2) return s[i];
        }
        return NULL;
    }
};