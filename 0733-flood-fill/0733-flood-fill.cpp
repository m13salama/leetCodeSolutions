#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        init;
        if(color == image[sr][sc]) return image;
        dfs(image, sr, sc, color, image[sr][sc]);
        return image;
    }
    
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int orignalColor){
        if(sr >= image.size() || sr < 0 || sc >= image[0].size() || sc < 0) return;
        if(image[sr][sc] != orignalColor) return;
        
        image[sr][sc] = color;
        
        dfs(image, sr+1, sc, color, orignalColor);
        dfs(image, sr, sc+1, color, orignalColor);
        dfs(image, sr-1, sc, color, orignalColor);
        dfs(image, sr, sc-1, color, orignalColor);

    }
};