class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        cin.tie(NULL);
        cout.tie(NULL);
        cin.sync_with_stdio(false);
        cout.sync_with_stdio(false);
        sort(nums.begin(), nums.end());
        int target= nums[0], count=1;
        for(int i=1 ; i<nums.size(); ++i){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }
};