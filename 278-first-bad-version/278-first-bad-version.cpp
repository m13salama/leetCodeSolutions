class Solution {
public:
    int firstBadVersion(int n) {
        cin.tie(0);
        cout.tie(0);
        long long l=1, r=n;
        long long mid=0, res=0;
        while(l <= r){
            mid = (l+r)/2;
            if(!isBadVersion(mid))
                l=mid+1;
            else{
                r=mid-1;
                res=mid;
            }

        }
        return res;
    }
};