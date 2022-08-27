#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
       init;
       int maxi = 0;
       int bi;
       for(int i=0; i<nums1.size(); i++){
           bi = biSearch(nums2, nums1[i], i, nums2.size()-1);
           if(bi > 0) bi--;
           maxi = max(maxi,(bi-i));
       } 
       return maxi;
    }
private:
    int biSearch(vector<int>& nums, int target, int l, int r){
        int mid;
        if(l>nums.size()) return 0;
        while(l <= r){
            mid = (l+r)/2;
            if(nums[mid] >= target) l = mid+1;
            else r = mid-1;
        }
        return l;
    }
};