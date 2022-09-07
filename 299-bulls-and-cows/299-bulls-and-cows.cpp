#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    string getHint(string secret, string guess) {
        init;
        map<char,int> momo1;
        map<char,int> momo2;
        string res ="";
        int cows=0, bulls=0;

        for(int i=0; i<secret.size(); i++){
            if(secret[i] == guess[i]) bulls++;
            else{
                if(momo2[secret[i]] != 0){
                    cows++;
                    momo2[secret[i]]--;
                }else{
                    momo1[secret[i]]++;
                }
                if(momo1[guess[i]] != 0){
                    cows++;
                    momo1[guess[i]]--;
                }else{
                    momo2[guess[i]]++;
                }
            }
        }
        res = res + to_string(bulls) + 'A' + to_string(cows) + 'B';
        return res;

    }
};