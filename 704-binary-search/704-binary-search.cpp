#define init  cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        init;
        int l=0, r=nums.size()-1;
        int mid =0;
        while(l<=r){
            mid = (l+r)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return -1;
    }
};