class Solution {
public:
    int convertTime(string current, string correct) {
        int del = current.find(':');
        int cur=0, cor=0;

        int hrs = stoi(current.substr(0, del));
        int mins = stoi(current.substr(del+1, current.size()));
        cur = hrs*60 + mins;

        hrs = stoi(correct.substr(0, del));
        mins = stoi(correct.substr(del+1, correct.size()));
        cor = hrs*60 + mins;

        int dif = cor-cur;
        int res=0;
        while(dif !=0){
            if(dif >= 60){
                res += dif/60;
                dif = dif%60;
            }else if(dif >= 15){
                res += dif/15;
                dif = dif%15;
            }else if(dif >= 5){
                res += dif/5;
                dif = dif%5;
            }else{
                res += dif;
                dif = dif%1;
            }
        }
        return res;


    }
};