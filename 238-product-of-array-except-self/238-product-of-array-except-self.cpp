class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int more_zeros=0, zero=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                more_zeros++;
                zero = i;
            }
            else prod *= nums[i];
        }
        if(more_zeros > 1){
            return vector<int>(nums.size());
        }else if(more_zeros == 1){
            vector<int> v (nums.size());
            v[zero] = prod;
            return v;
        }
        for (int i=0; i<nums.size(); i++){
            nums[i] = prod/nums[i];
        }
        return nums;
    }
};