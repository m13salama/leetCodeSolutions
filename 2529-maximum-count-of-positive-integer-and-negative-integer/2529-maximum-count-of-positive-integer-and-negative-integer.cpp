#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        init;
        int pos=0, neg=0;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            if(nums[i] < 0) neg++;
            else if(nums[i] > 0) pos++;
        }
        return max(pos,neg);
    }
};