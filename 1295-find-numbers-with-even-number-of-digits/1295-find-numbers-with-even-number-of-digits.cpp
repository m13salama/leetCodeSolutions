#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        init;
        int n=nums.size();
        int res=0;
        for(int i=0; i<n; i++){
            res += ((noDigits(nums[i])+1)%2);
        }
        return res;
    }
    int noDigits(int num){
        int res=0;
        while(num){
            res++;
            num/=10;
        }
        return res;
    }
};