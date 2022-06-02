class Solution {
public:
    //binary search on first column then on that row
    bool isAnagram(string s, string t) {
        cin.tie(NULL);
        cout.tie(NULL);
        cin.sync_with_stdio(false);
        cout.sync_with_stdio(false);
        if(s.size() != t.size()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        int p=0;
        for (int i=0; i<s.size(); ++i){
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;
    }
};