class Solution {
public:
    //2 maps solution .... we can sort then use 2 pointers 
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        cin.tie(NULL);
        cout.tie(NULL);
        cin.sync_with_stdio(false);
        cout.sync_with_stdio(false);
        vector<int> res;
        map<int, int> m1;
        int i;
        for(i=0; i<nums1.size(); i++){
            m1[nums1[i]]++;
        }
        for(i=0; i<nums2.size(); i++){
            if(m1[nums2[i]] != 0){
                res.push_back(nums2[i]);
                m1[nums2[i]]--;
            }
        }
        return (res);
    }
};