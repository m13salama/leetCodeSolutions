#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        init;
        int n = temperatures.size();
        vector<int> res(n,0);
        stack<pair<int, int>> st;
        
        for(int i=0; i<n; i++){
            while(st.size()>0 && temperatures[i] > st.top().first){
                res[st.top().second] = i-st.top().second;
                st.pop();
            }
            st.push({temperatures[i],i});
            
        }
        
        return res;
    }
};