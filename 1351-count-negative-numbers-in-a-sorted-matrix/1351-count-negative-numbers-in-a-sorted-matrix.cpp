#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        init;
        int m=grid.size()-1, n=grid[0].size()-1, guess;
        int r=0, c=0;
        int res=0;
        while(m >=0 && n>=0 && r<grid.size() && c<grid[0].size() && m>=r && n>=c){
            if(grid[r][n] >= 0){
                r++;
            }else{
                res+= (m+1)-r;
                n-=1;
            }

            if(grid[m][c] >= 0){
                 c++;
            }else{
                res+= (n+1)-c;
                m-=1;
            }
        }
        return res;
    }
};