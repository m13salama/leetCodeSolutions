#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        init;
        int n = nums.size();
        vector<int> ans(2, -1);
		
        if(n==0)    return ans;
        
        int l=0, r = n-1, m;
        while(l<=r){
            m = l + (r-l)/2;
            if(nums[m]>=t)   r = m-1;
            else    l = m+1;
        }
        if((l!=0 && r==-1) || (l>=n && r==n-1) || nums[r+1]!=t)   return ans;
		
        ans[0] = r+1;
        
        l = 0, r = n-1;
        while(l<=r){
            m = l+(r-l)/2;
            if(nums[m]<=t)   l = m+1;
            else    r = m-1;            
        }
		
        ans[1] = l-1;
        return ans;
	}
};
