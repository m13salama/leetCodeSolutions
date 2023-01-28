#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        init;
        map<int, int> momo;
        int n=nums.size();
        
        for(int i=0; i<n; i++){
            momo[nums[i]]++;
            if(momo[nums[i]] > 1) return true;
        }
        
        return false;
    }
};