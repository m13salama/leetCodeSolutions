#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int countDigits(int num) {
        init;
        int n = num;
        int res=0;
        
        while(n != 0){
            if(num % (n%10) == 0) res++;
            n /= 10;
        }
        return res;
    }
};