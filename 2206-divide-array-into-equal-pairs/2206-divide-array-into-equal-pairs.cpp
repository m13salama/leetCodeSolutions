#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        init;
        int n=nums.size();
        int res=0;
        map<int,int> momo;
        for(int i=0; i<n ;i++){
            momo[nums[i]]++;
        }
        
        for(auto x: momo){
            if(x.second % 2) return false;
            else res += x.second/2;
        }
        if(res == n/2)return true;
        return false;
    }
};