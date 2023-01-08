#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        init;
        map<int,int> momo;
        int n=nums.size();
        
        for(int i=0; i<n; i++){
            momo[nums[i]]++;
        }
        
        while(1){
            if(momo[original] == 0) return original;
            original *= 2;
        }
    }
};