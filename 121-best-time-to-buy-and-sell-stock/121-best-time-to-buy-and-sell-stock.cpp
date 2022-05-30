class Solution {
public:
    //o(n) 
    int maxProfit(vector<int>& prices) {
        cin.tie(NULL);
        cout.tie(NULL);
        cin.sync_with_stdio(false);
        cout.sync_with_stdio(false);
        int profit = 0, n=prices.size(), mini=prices[0];
        for (int k = 1; k < n; k++) {
            profit = max(prices[k]-mini,profit);
            mini = min(prices[k],mini);
        }
        return profit;
    }
};