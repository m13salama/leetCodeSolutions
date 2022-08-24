#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        init;
        vector<int> res;
        set<pair<int, int>> s;

        for(int i=0; i<mat.size(); i++){
            s.insert({firstZero(mat, i),i});
        }        

        for(auto &x : s)
        {
            if(k--)
            {
                res.push_back(x.second);
            }
            else
            {
                break;
            }
        }
        return res;

    }
    int firstZero(vector<vector<int>>& mat, int row){
        int l=0, r=mat[row].size()-1;
        long long int mid;
        while(l <= r){
            mid = l+(r-l)/2;
            if(mat[row][mid] == 1){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        return mat[row][mid]==0? mid: mid+1;
    }
};