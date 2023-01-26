#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        init;
        
        vector<vector<int>> pascal(numRows);
        pascal[0].push_back(1);
        
        for(int i=1; i<numRows; i++){
            pascal[i].push_back(1);
            for(int j=1; j<i; j++){
                pascal[i].push_back(pascal[i-1][j]+pascal[i-1][j-1]);
            }
            pascal[i].push_back(1);
        }
        return pascal;
        
    }
};