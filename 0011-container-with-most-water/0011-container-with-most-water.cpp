#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    int maxArea(vector<int>& height) {
        init;
        int maxArea = 0;
        int n = height.size();
        
        int p1=0, p2=n-1;
        
        while(p2>p1){
            maxArea = max(maxArea, min(height[p1], height[p2])*(p2-p1));
            if(height[p1] > height[p2]) p2--;
            else if(height[p2] > height[p1]) p1++;
            else height[p1+1] > height[p2-1]? p1++: p2--;
        }
        return maxArea;
    }
};