class Solution {
public:
    int findNumbers(vector<int>& nums) {
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