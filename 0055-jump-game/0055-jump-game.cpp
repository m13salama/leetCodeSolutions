#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    bool canJump(vector<int>& nums) {
        init;
        int n = nums.size();
        int max_ava = nums[0]+1;
        
        
        for(int i=0; i<max_ava; i++){
            max_ava = max(max_ava, i+nums[i]+1);
            if(max_ava >= n) return true;
        }
        return false;
    
    }
};