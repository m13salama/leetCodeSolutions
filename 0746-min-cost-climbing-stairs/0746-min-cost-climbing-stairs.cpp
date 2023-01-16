#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        init;
        int n = cost.size();
        vector<int> v(n+1);
        v[0] = 0; v[1] = 0;
        for(int i=2; i<n+1; i++){
            v[i] = min(v[i-1]+cost[i-1],v[i-2]+cost[i-2]);
        }
        return v[n];
        
    }
};