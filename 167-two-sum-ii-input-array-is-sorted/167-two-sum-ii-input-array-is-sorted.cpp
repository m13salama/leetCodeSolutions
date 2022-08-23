class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        cin.tie(0);
        cout.tie(0);
        cin.sync_with_stdio(0);
        cout.sync_with_stdio(0);
        vector<int> res = {0,1};
        int n = numbers.size();
        int l=0, r=n-1;
        while(l < r){
            if(numbers[l]+numbers[r] == target) break;
            numbers[l]+numbers[r] > target? r--: l++;

        }
        res = {l+1,r+1};
        return res;
    }
};