#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int findMin(vector<int>& nums) {
        init;
        int n = nums.size();
        int low=0, high=n-1;
        
        while(low<high){
            int mid = low + (high-low)/2;
            if(nums[mid] > nums[high]) low = mid+1;
            else high = mid;
        }
        // cout << nums[low];
        return nums[low];
    }
};