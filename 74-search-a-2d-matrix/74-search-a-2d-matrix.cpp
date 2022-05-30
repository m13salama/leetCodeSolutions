class Solution {
public:
    //binary search on first column then on that row
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        cin.tie(NULL);
        cout.tie(NULL);
        cin.sync_with_stdio(false);
        cout.sync_with_stdio(false);
        int a = 0, b = matrix.size()-1;
        int r = 0;
        while (a <= b) {
            r = (a+b)/2;
            if (matrix[r][0] == target) {
                // target found at index k
                return true;
            }
            //modify binary search a little
            if (matrix[r][0] < target && target> matrix[r][matrix[0].size()-1]) a = r+1;
            else if(matrix[r][0] < target && target<= matrix[r][matrix[0].size()-1]) break;
            else b = r-1;
        }
        a = 0, b = matrix[0].size()-1;
        int c = 0;
        while (a <= b) {
            c = (a+b)/2;
            if (matrix[r][c] == target) {
                // target found at index k
                return true;
            }
            if (matrix[r][c] > target) b = c-1;
            else a = c+1;
        }
        return false;
    }
};