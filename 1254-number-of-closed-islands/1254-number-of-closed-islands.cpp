#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    vector<vector<bool>> visited;
    int closedIsland(vector<vector<int>>& grid) {
        init;
        int res = 0;
        int m = grid.size() , n = grid[0].size();
        visited.resize(m, vector<bool>(n, false));
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 0 && !visited[i][j]){
                    if(dfs(grid, i, j)) res++;;
                }
            }
        }
        return res;
    }
    bool dfs(vector<vector<int>>& grid, int row, int col){
        if(row >= grid.size() || row < 0 || col >= grid[0].size() || col < 0) return false;
        if(grid[row][col] == 1 || visited[row][col]) return true;
        
        visited[row][col] = true;
        bool res = true;
        
        res = res & dfs(grid, row+1, col);
        res = res & dfs(grid, row, col+1);
        res = res & dfs(grid, row-1, col);
        res = res & dfs(grid, row, col-1);
        
        return res;
    }
};