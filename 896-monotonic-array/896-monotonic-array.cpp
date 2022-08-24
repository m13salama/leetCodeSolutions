#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        init;
        if(nums.size()==1) return true;
        
        int flag = -1;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]) continue;
            else if(nums[i] > nums[i+1] && (flag == -1 || flag == 0)) flag=0;
            else if(nums[i] < nums[i+1] && (flag == -1 || flag == 1)) flag=1;
            else return false;
        }        
        return true;
    }
};