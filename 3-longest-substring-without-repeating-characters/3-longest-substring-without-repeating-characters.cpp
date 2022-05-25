class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        cin.tie(0);
        cout.tie(0);
        cin.sync_with_stdio(0);
        cout.sync_with_stdio(0);
        int res = 0, count=0;
        map<char, int> m;
        int p1=0, p2=0;
        while(p1 < s.size() && p2< s.size()){
            if(m[s[p1]] == 0){
                m[s[p1]]++;
                p1++;
                res = max(res,count+1);
                count++;
            }else{
                m[s[p2]]--;
                p2++;
                count--;
            }

        }
        return res;
    }

};