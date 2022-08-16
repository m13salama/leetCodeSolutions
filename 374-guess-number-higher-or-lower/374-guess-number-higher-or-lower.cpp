#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)


class Solution {
public:
    int guessNumber(int n) {
        init;
        int l=1, r=n;
        long long int mid;
        while(l<=r){
            mid = l + (r - l) / 2;
    
            if (guess(mid) == 0)
                return mid;
            else if (guess(mid) == 1)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return mid;
    }
};