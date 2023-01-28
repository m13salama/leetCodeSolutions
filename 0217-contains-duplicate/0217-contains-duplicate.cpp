#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        init;
        map<int, int> momo;
        int n=nums.size();
        
        int x;
        for(int i=0; i<n; i++){
            x = ++momo[nums[i]];
            if(x > 1) return true;
        }
        
        return false;
    }
};