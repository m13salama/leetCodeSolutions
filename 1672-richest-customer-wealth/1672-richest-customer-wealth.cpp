#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        init;
        int n=accounts.size();
        int m=accounts[0].size();
        
        int sum=0, res=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                sum += accounts[i][j];
            }
            if(sum > res) res=sum;
            sum=0;
        }
        return res;
    }
};