#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int numDifferentIntegers(string word) {
        init;
        map<string, int> momo;
        int n=word.size();
        string temp = "";
        for(int i=0; i<n; i++){
            if(word[i] >= '0' && word[i] <= '9'){
                if(temp == "0") temp=word[i];
                else temp += word[i];
            }else if (temp != ""){
                momo[temp]++;
                temp="";
            }
        }
        if(temp != "") momo[temp]++;
        return momo.size();
    }
};