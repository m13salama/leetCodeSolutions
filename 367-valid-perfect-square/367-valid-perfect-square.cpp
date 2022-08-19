#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)


class Solution {
public:
    bool isPerfectSquare(int num) {
        init;
        int l=0, r=num;
        long long int mid;
        while(l<=r){
            mid = l + (r - l) / 2;
    
            if (mid*mid == num)
                return true;
    
            if (mid*mid < num)
                l = mid + 1;
    
            else
                r = mid - 1;
        }
        return false;
    }
};