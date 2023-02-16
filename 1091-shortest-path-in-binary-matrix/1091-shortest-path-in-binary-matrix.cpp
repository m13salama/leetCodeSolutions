#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        init;
        int n = grid.size();
        int res = -1;
        
        queue<pair<int,int>> q;
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        vector<vector<int>> distance(n, vector<int>(n));
        
        if(grid[0][0] == 1) return -1;
        q.push({0,0});
        
        while(!q.empty()){
            pair<int,int> s = q.front(); q.pop();
            if(s.first == n-1 && s.second == n-1){
                return distance[s.first][s.second]+1;
            }
            
            if(s.first+1 < n && !distance[s.first+1][s.second] && grid[s.first+1][s.second] == 0){
                distance[s.first+1][s.second] = distance[s.first][s.second] + 1;
                q.push({s.first+1,s.second});
            }
            if(s.first-1 > -1 && !distance[s.first-1][s.second] && grid[s.first-1][s.second] == 0){
                distance[s.first-1][s.second] = distance[s.first][s.second] + 1;
                q.push({s.first-1,s.second});
            }
            if(s.second+1 < n && !distance[s.first][s.second+1] && grid[s.first][s.second+1] == 0){
                distance[s.first][s.second+1] = distance[s.first][s.second] + 1;
                q.push({s.first,s.second+1});
            }
            if(s.second-1 > -1 && !distance[s.first][s.second-1] && grid[s.first][s.second-1] == 0){
                distance[s.first][s.second-1] = distance[s.first][s.second] + 1;
                q.push({s.first,s.second-1});
            }
            if(s.first+1 < n && s.second+1 < n && !distance[s.first+1][s.second+1] && grid[s.first+1][s.second+1] == 0){
                distance[s.first+1][s.second+1] = distance[s.first][s.second] + 1;
                q.push({s.first+1,s.second+1});
            }
            if(s.first+1 < n && s.second-1 > -1 && !distance[s.first+1][s.second-1] && grid[s.first+1][s.second-1] == 0){
                distance[s.first+1][s.second-1] = distance[s.first][s.second] + 1;
                q.push({s.first+1,s.second-1});
            }
            if(s.first-1 > -1 && s.second+1 < n && !distance[s.first-1][s.second+1] && grid[s.first-1][s.second+1] == 0){
                distance[s.first-1][s.second+1] = distance[s.first][s.second] + 1;
                q.push({s.first-1,s.second+1});
            }
            if(s.first-1 > -1 && s.second-1 > -1 && !distance[s.first-1][s.second-1] && grid[s.first-1][s.second-1] == 0){
                distance[s.first-1][s.second-1] = distance[s.first][s.second] + 1;
                q.push({s.first-1,s.second-1});
            }
        }
        return -1;
    }
};