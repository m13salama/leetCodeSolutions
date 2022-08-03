#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)


class Solution {
public:
    vector<int> countBits(int n) {
        init;
        vector<int> res;
        for(int i=0; i<=n; i++){
            res.push_back( __builtin_popcount(i));
        }
        return res;
    }
};