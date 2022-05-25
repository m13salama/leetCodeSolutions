class Solution {
public:
    int hammingWeight(uint32_t n) {
        cin.tie(0);
        cout.tie(0);
        cin.sync_with_stdio(0);
        cout.sync_with_stdio(0);        
        return (__builtin_popcount(n));
    }
};