#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        init;
        int res=0;
        int m = grid.size() , n = grid[0].size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == '1'){
                    res++;
                    dfs(grid, i, j);
                }
            }
        }
        return res;
    }
    void dfs(vector<vector<char>>& grid, int row, int col){
        if(row >= grid.size() || row < 0 || col >= grid[0].size() || col < 0) return;
        if(grid[row][col] == '0' ) return;
        
        grid[row][col] = '0';
        
        dfs(grid, row+1, col);
        dfs(grid, row, col+1);
        dfs(grid, row-1, col);
        dfs(grid, row, col-1);

    }
};