class Solution {
public:
    int findMin(vector<int>& nums) {
        return search(nums);
    }
    int search(vector<int>& nums){
        int l=0, r=nums.size()-1;
        int mid=0;
        int mini=0;
        while(l<=r){
            mid = (l+r)/2;
            mini = nums[mid];
            if(mid !=0 && mini < nums[mid-1]) return mini;
            else if(mini > nums[r]) l = mid+1;
            else if(mini < nums[l]) r = mid-1;
            else r=mid-1;
        }
        return nums[0];
    }
};