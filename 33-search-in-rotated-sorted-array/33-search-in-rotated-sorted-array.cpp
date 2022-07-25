class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot = get_pivot(nums);
        int res = binary_search(nums, 0, pivot, target);
        if(res == -1){
            res = binary_search(nums, pivot+1, nums.size()-1, target);
        } 
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
    int binary_search(vector<int>& nums, int l, int r, int target){
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) l = mid+1;
            else if(nums[mid] > target) r = mid-1;

        }
        return -1;
    }
};