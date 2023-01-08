#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        init;
        //hash the letters
        map<char,int> momo;
        int n = s.size();
        
        for(int i=0; i<n; i++){
            if(momo[s[i]] != 0){
                if(distance[s[i] - 'a'] != (i-momo[s[i]])) return false;
            }else{
                momo[s[i]] = (i+1);
            }
        }
        return true;
        
    }
};