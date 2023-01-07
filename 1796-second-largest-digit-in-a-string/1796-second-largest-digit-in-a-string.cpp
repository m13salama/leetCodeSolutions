#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int secondHighest(string s) {
        init;
        int n=s.size();
        int maxi = -1;
        int maxi2 = -1;
        for(int i=0; i<n; i++){
            if(s[i] <= '9' && s[i] >= '0'){
                if((s[i]-'0')>maxi){
                    maxi2 = maxi;
                    maxi = s[i]-'0';
                }else if((s[i]-'0')>maxi2 && (s[i]-'0')<maxi){
                    maxi2 = s[i]-'0';
                }
            }
        }
        return maxi2;
    }
};