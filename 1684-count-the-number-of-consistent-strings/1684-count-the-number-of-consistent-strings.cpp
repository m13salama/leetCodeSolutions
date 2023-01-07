class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
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