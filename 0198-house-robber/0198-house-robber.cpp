#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int rob(vector<int>& nums) {
        init;
        int n = nums.size();
        vector<int> arr(n+1);
        arr[0] = 0;
        arr[1] = nums[0];
        for(int i=2; i<=n; i++){
            arr[i] = max(arr[i-1],nums[i-1]+arr[i-2]);
        }
        return arr[n];
    }
};