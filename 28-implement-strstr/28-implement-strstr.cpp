#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)


class Solution {
public:
    int strStr(string haystack, string needle) {
        init;
        int p_hay=0, p_needle=0;
        int res=0;
        while(p_hay<haystack.size() && p_needle<needle.size()){
            if(needle[p_needle] == haystack[p_hay]){
                p_hay++;
                p_needle++;
            }else{
                cout << p_needle << "  " << p_hay << endl;
                p_needle = 0;
                p_hay = res+1;
                res = p_hay;
            }
        }
        return (p_needle == needle.size())? res: -1;
    }
};