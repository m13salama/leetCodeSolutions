#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    double average(vector<int>& salary) {
        init;        
        int maxi = 1000, mini=INT_MAX;
        double res = 0;
        for(int i=0; i<salary.size(); i++){
            maxi = max(maxi, salary[i]);
            mini = min(mini, salary[i]);
            res += salary[i];
        }
        res = res - mini - maxi;        
        return res/(salary.size()-2);
    }
};