class Solution {
public:
    //o(m*n)
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        cin.tie(NULL);
        cout.tie(NULL);
        cin.sync_with_stdio(false);
        cout.sync_with_stdio(false);
        if(mat.size()*mat[0].size() != r*c){
            return mat;
        }
        vector<vector<int>> res( r , vector<int> (c, 0));
        map<int, int> m1;
        int row=0 , col=0;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[i].size(); j++){
                if(col < c){
                    res[row][col] = mat[i][j];
                }else{
                    col =0;
                    row++;
                    res[row][col] = mat[i][j];
                }
                col++;
            }
        }

        return (res);
    }
};