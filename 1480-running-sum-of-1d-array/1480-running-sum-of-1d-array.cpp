#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        init;
        for(int i=1; i<nums.size(); i++){
            nums[i] = nums[i]+nums[i-1];
        }
        return nums;

    }
};