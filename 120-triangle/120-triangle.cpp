class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
    
        int n = tri.size();
        vector<int> temp(n + 1, 0);
        tri.push_back(temp);
        for(int i = n-1; i >= 0; i--)
        {
            for(int j = 0; j < tri[i].size(); j++)
            {
                int join_path = min(tri[i+1][j], tri[i+1][j+1]);
                tri[i][j] += join_path;
            }
        }
        return tri[0][0];
    }
};