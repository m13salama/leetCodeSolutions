class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> v(nums.size()+1);
        vector<int> res;
        map<int,int> m;

        for (int i=0; i<nums.size(); ++i){
            m[nums[i]]++;
        }

        for(auto it = m.begin(); it != m.end(); it++){
            v[it->second].push_back(it->first);

        }
        for(int i=nums.size(); i>=0; i--){
            if(res.size() >= k){
                break;
            }
            if(!v[i].empty()){
                res.insert(res.end(),v[i].begin(),v[i].end());
            }
        }
        return res;
        
    }
};