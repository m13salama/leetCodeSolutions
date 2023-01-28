#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        init;
        int n= nums.size();
        vector<int> res(n);
        
        int prefix = 1;
        
        for(int i=0; i<n; i++){
            res[i] = prefix;
            prefix *= nums[i];
        }
        
        int postfix = 1;
        for(int i=n-1; i>=0; i--){
            res[i] *= postfix;
            postfix *= nums[i];
        }
        return res;
    }
};