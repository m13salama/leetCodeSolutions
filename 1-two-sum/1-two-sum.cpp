class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        cin.tie(NULL);
        cout.tie(NULL);
        cin.sync_with_stdio(false);
        cout.sync_with_stdio(false);
        map<int, int> m;
        vector<int> res(2);
        int calc = 0;
        int i;
        for(i=0; i<nums.size(); i++){
            calc = target-nums[i];
            if(m[calc] != 0)
                break;
            else{
                m[nums[i]] = i+1;
            }
        }
        res[0] = i;
        res[1] = m[calc]-1;       
        return (res);
    }
};
