class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,int> m;
        vector<vector<string>> res;
        int count =1;

        for(int i=0; i<strs.size(); i++){
            string str = strs[i];
            sort(str.begin(), str.end());
            if(m[str] != 0){
                res[m[str]-1].push_back(strs[i]);
            }else{
                m[str] = count;
                vector<string> v = {strs[i]};
                res.push_back(v);
                count++;

            }
        }
        return res; 
        
    }
};