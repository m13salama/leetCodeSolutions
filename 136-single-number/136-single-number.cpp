class Solution {
public:
    int singleNumber(vector<int>& nums) {
        cin.tie(0);
        cout.tie(0);
        cin.sync_with_stdio(0);
        cout.sync_with_stdio(0);
        int res = 0;
        for(int i=0; i<nums.size(); i++){
            res = res ^ nums[i];
        }       
        return (res);
    }
};