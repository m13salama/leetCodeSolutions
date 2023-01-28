class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> momo;
        int n=nums.size();
        
        for(int i=0; i<n; i++){
            momo[nums[i]]++;
            if(momo[nums[i]] > 1) return true;
        }
        
        return false;
    }
};