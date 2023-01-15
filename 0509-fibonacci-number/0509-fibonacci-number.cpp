#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int fib(int n) {
        init;
        int n0 = 0, n1=1;
        for(int i=0; i<n; i++){
            n1 = n0+n1;
            n0 = n1-n0;
        }
        return n0;
    }
};