#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        init;
        map<int, int> momo;
        for(int i=0; i<arr.size(); i++){
            momo[arr[i]]++;
        }
        map<int, int> nono;
        for(const auto &p : momo ){
            if(nono[p.second] == 0) nono[p.second]++;
            else return false;
        }
        return true;
    }
};