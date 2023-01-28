#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        init;
        vector<vector<string>> res;
        int n=strs.size();
        
        map<string, int> momo;
        
        int count=0;
        int temp = 0;
        for(int i=0; i<n; i++){
            string str = strs[i];
            sort(strs[i].begin(), strs[i].end());
            temp = momo[strs[i]];
            if(temp == 0){
                momo[strs[i]] = ++count;
                res.push_back({str});
            }else{
                res[temp-1].push_back(str);
            }
        
        }
        return res;
    }
};