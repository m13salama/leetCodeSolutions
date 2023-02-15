#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        init;
        int res = 0;
        int m = grid.size() , n = grid[0].size();
        
        for(int i=0; i<m; i++){
            if(grid[i][0] == 1){
                dfs(grid, i, 0);
            }
            if(grid[i][n-1] == 1){
                dfs(grid, i, n-1);
            }
        }
        for(int i=0; i<n; i++){
            if(grid[0][i] == 1){
                dfs(grid, 0, i);
            }
            if(grid[m-1][i] == 1){
                dfs(grid, m-1, i);
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){
                    res++;;
                }
            }
        }
        return res;
    }
    void dfs(vector<vector<int>>& grid, int row, int col){
        if(row >= grid.size() || row < 0 || col >= grid[0].size() || col < 0) return ;
        if(grid[row][col] == 0) return ;
        
        grid[row][col] = 0;
        
        dfs(grid, row+1, col);
        dfs(grid, row, col+1);
        dfs(grid, row-1, col);
        dfs(grid, row, col-1);
        
    }
};