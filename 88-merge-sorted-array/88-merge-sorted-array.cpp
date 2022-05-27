//2 pointers approach
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        cin.tie(NULL);
        cout.tie(NULL);
        cin.sync_with_stdio(false);
        cout.sync_with_stdio(false);
        int p1=m-1, p2=n-1;
        int count = m+n-1;
        while(p1>=0 && p2>=0){
            if(nums1[p1] >= nums2[p2]){
                nums1[count--] = nums1[p1];
                p1--;
            }else{
                nums1[count--] = nums2[p2];
                p2--;
            }
        }
        while(p2 != -1){
            nums1[count--] = nums2[p2];
            p2--;
        }
    }
};