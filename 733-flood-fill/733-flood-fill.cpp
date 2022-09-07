class Solution {
public:
    int cur_color; 
    int fill_color;

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        cur_color = image[sr][sc];
        fill_color = color;
        if (fill_color == cur_color) return image;
        dfs(image, sr, sc);
        return image;
    }
    void dfs(vector<vector<int>>& image, int sr, int sc){
        if(sr>= image.size() || sc>= image[0].size() || sr<0 || sc<0) return;
        if(image[sr][sc] != cur_color) return;

        image[sr][sc] = fill_color;

        dfs(image, sr-1, sc);
        dfs(image, sr, sc+1);
        dfs(image, sr+1, sc);
        dfs(image, sr, sc-1);

    }
};