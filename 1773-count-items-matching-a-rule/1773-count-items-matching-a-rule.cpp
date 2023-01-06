#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        init;
        int key = 0;
        int n = items.size();
        if(ruleKey == "color"){
            key = 1;
        }else if(ruleKey == "name"){
            key = 2;
        }
        int res =0;
        for(int i=0; i<n; i++){
            if(items[i][key] == ruleValue) res++;
        }
        return res;
        
    }
};