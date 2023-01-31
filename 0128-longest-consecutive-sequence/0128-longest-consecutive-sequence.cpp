class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> momo;
        int n = nums.size();
        
        int res=0;
        for(int i=0; i<n; i++){
            momo[nums[i]] = 1;
        }
        map<int, int> momo2;
        for(int i=0; i<n; i++){
            if(momo[nums[i]-1] == 0 && momo2[nums[i]] == 0){
                int j=0;
                while(momo[nums[i]+j] != 0){
                    momo2[nums[i]]++;
                    j++;
                }
                res = max(res, momo2[nums[i]]);
            }
        }
        return res;
    }
};