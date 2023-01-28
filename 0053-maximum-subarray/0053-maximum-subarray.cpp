#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        init;
        int n = nums.size();
        vector<int> dp(n);
        int res = nums[0];
        
        dp[0] = nums[0];
        for(int i=1; i<n; i++){
            dp[i] = max(nums[i], nums[i]+dp[i-1]);
            res = max(res, dp[i]);
        }
        
        return res;
    }
};