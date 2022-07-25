class Solution {
public:
    int findMin(vector<int>& nums) {
        int pivot = get_pivot(nums);
        int res = min(nums[0],nums[(pivot+1)%nums.size()]);
        return res;
    }
    int get_pivot(vector<int>& nums){
        int l=0, r=nums.size()-1;
        while(l<r){
            if(nums[l] > nums[l+1]) return l;
            if(nums[r-1] > nums[r]) return r-1;
            l++; r--;
        }
        return 0;
    }
};