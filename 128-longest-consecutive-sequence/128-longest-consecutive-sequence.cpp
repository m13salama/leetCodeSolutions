class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        vector<vector<int>> v;
        int res=0;

        for (int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        for (auto it = s.begin(); it != s.end(); it++){
            if(!s.count(*it-1)){
                vector<int> c;
                c.push_back(*it);
                v.push_back(c);
            
                int len = 1;
            
                while(s.count(len+*it))   len++;
                res = max(res,len);
            }
        }      
        return res;


    }
};