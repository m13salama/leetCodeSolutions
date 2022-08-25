#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)


class Solution {
public:
    int arrangeCoins(int n) {
        init;
        return (int)(sqrt(2 * (long)n + 0.25) - 0.5);
    }
};