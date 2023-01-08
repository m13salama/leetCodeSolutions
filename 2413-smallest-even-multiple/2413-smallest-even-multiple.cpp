#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int smallestEvenMultiple(int n) {
        init;
        if(n%2 == 0) return n;
        return n*2;
    }
};