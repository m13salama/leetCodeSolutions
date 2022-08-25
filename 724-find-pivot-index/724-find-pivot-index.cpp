#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        init;
        for(int i=1; i<nums.size(); i++){
            nums[i] = nums[i]+nums[i-1];
        }
        int res=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[nums.size()-1]-nums[i] == res) return i;
            res = nums[i];
        }
        return -1;

    }
};