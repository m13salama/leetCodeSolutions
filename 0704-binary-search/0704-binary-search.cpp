#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        init;
        int n = nums.size();
        int l=0, h=n;
        
        int m = 0;
        while(l<h){
            m = l + (h-l)/2;
            if(nums[m] < target) l = m+1;
            else h = m;
        }
        if(target == nums[l%n]) return l;
        else return -1;
    }
};