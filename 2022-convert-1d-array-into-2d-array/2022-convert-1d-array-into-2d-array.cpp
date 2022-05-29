class Solution {
public:
    //o(n*m)
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        cin.tie(NULL);
        cout.tie(NULL);
        cin.sync_with_stdio(false);
        cout.sync_with_stdio(false);
        if(original.size() != m*n){
            return {};
        }
        vector<vector<int>> res( m , vector<int> (n, 0));
        int row=0 , col=0;
        for(int j=0; j<original.size(); j++){
            if(col < n){
                res[row][col] = original[j];
            }else{
                col =0;
                row++;
                res[row][col] = original[j];
            }
            col++;
        }

        return (res);
    }
};