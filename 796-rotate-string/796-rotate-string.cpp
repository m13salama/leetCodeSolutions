#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    bool rotateString(string s, string goal) {
        init;
        int start=0, p1=0, p2=0;
        if(s.size() != goal.size()) return false;
        while(start<s.size() && p2<goal.size()){
            if(s[start] != goal[0]){
                start++;
                p2=0;
                p1=0;
                continue;
            }

            if(s[(start+p1)%s.size()] == goal[p2]){
                p1++; p2++;
            }else{
                start++;
                p1=0;
                p2=0;
            }

        }
        return p2 == goal.size()? true: false;
    }
};