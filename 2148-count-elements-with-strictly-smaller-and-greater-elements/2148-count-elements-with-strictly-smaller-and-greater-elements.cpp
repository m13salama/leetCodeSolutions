#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int countElements(vector<int>& nums) {
        init;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        int p1=0, p2=n-1;
        while(p1<p2){
            if(nums[p1] == nums[p1+1]) p1++;
            else if(nums[p2] == nums[p2-1]) p2--;
            else break;
        }
        return (-1-p1+p2) == -1? 0: (-1-p1+p2);
    }
};