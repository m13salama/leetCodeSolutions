class Solution {
public:
    int singleNumber(vector<int>& nums) {
        cin.tie(NULL);
        cout.tie(NULL);
        cin.sync_with_stdio(0);
        cout.sync_with_stdio(0);
        int res = nums[0];
        for(int i=1; i<nums.size(); i++){
            res = res ^ nums[i];
        }       
        return (res);
    }
};