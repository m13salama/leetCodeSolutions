#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    int climbStairs(int n) {
        init;
        vector<int> v(n+1);
        v[0] = 1; v[1]=1;
        for(int i=2; i<n+1; i++){
            v[i] = v[i-1]+v[i-2];
        }
        return v[n];
    }
};