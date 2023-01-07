#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        init;
        
        set<char> soso;
        for(int i=0; i<allowed.size(); i++)
            soso.insert(allowed[i]);
        
        int res=0;
        for(int i=0; i<words.size(); i++){
            int flag=1;
            for(int j=0; j<words[i].size(); j++){
                if(!soso.count(words[i][j])){
                    flag=0;
                    break;
                }
            }
            if(flag) res++;
        }
        return res;
    }
};