const static auto fast = []{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l=0, r=nums.size()-1;
        while(l<r){
            if(nums[l]%2==1 && nums[r]%2==0){
                nums[l] = nums[l]^nums[r];
                nums[r] = nums[l]^nums[r];
                nums[l] = nums[l]^nums[r];
                l++; r--;
            }else if(nums[l]%2==0) l++;
            else if(nums[r]%2==1) r--;
            else {r--; l++;}
        }
        return nums;

    }
};