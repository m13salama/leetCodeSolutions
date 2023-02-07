#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        init;
        int n = position.size();
        vector<pair<int,int>> cars(n);
        for (int i=0; i<n; i++)
            cars[i] = (make_pair(position[i], speed[i]));
        
        sort(cars.begin(), cars.end());
        
        stack<float> st;
        float x = 0;
        int res=0;
        for(int i=n-1; i>=0; i--){
            x = (target-cars[i].first)/(float)cars[i].second;
            if(st.size() > 0 && st.top() < x){
                res++;
                st.push(x);
            }else if(st.size() == 0) st.push(x);
            
        }
        return res+1;
    }
};