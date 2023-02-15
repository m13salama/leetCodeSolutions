#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        init;
        int maxArea = 0;
        int m = grid.size() , n = grid[0].size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){
                    maxArea = max(maxArea, dfs(grid, i, j));
                }
            }
        }
        return maxArea;
    }
    int dfs(vector<vector<int>>& grid, int row, int col){
        if(row >= grid.size() || row < 0 || col >= grid[0].size() || col < 0) return 0;
        if(grid[row][col] == 0 ) return 0;
        
        grid[row][col] = 0;
        int res=1;
        
        res += dfs(grid, row+1, col);
        res += dfs(grid, row, col+1);
        res += dfs(grid, row-1, col);
        res += dfs(grid, row, col-1);
        
        return res;
    }};