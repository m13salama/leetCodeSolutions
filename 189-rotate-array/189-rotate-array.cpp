class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        cin.tie(0);
        cout.tie(0);
        vector<int> res(nums.size());
        int n = nums.size();
        int l=0, r= n-1;
        for (int i=0; i<n; i++){
            res[(i+k)%n] = nums[i];
        }
        nums = res;
    }
};