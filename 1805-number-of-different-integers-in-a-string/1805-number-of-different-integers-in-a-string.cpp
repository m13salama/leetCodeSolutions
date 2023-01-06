class Solution {
public:
    int numDifferentIntegers(string word) {
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