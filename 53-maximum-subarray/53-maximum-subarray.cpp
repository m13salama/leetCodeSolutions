class Solution {
public:
    //o(n) 
    int maxSubArray(vector<int>& nums) {
        cin.tie(NULL);
        cout.tie(NULL);
        cin.sync_with_stdio(false);
        cout.sync_with_stdio(false);
        int best = nums[0], n=nums.size(), sum=0;
        for (int k = 0; k < n; k++) {
            sum = max(nums[k],sum+nums[k]);
            best = max(best,sum);
        }
        return best;
    }
};