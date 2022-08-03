#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)


class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        init;
        vector<int> res;
        res.push_back(first);
        for(int i=0; i<encoded.size(); i++){
            res.push_back(encoded[i]^res[i]);
        }
        return res;
    }
};