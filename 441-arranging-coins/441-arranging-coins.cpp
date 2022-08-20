#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)


class Solution {
public:
    int arrangeCoins(int n) {
        init;
        int i=1, res=0;
        long long int mid;
        while(n-i >= 0){
            n -= i;
            i++;
            res++;
        }
        return res;
    }
};