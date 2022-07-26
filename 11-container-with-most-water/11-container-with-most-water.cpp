const static auto fast = []{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r=height.size()-1;
        int res=0;
        while(l<r){
            res = max(res,min(height[l],height[r])*(r-l));
            if(height[l] < height[r]) l++;
            else r--;
        }
        return res;
    }
};