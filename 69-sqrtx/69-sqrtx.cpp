#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)


class Solution {
public:
    int mySqrt(int x) {
        init;
        int l=0, r=x;
        long long int mid;
        while(l<=r){
            mid = l + (r - l) / 2;
    
            // Check if x is present at mid
            if (mid*mid == x)
                return mid;
    
            // If x greater, ignore left half
            if (mid*mid < x)
                l = mid + 1;
    
            // If x is smaller, ignore right half
            else
                r = mid - 1;
        }
        return (mid*mid)>x? mid-1:mid;
    }
};
