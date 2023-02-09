#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        init;
        int n = nums.size();
        int low=0, high=n-1;
        
        while(low<high){
            int mid = low + (high-low)/2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target <= nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                if (nums[mid] <= target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        cout << nums[low];
        return nums[low%n] == target ? low : -1;
    }
};