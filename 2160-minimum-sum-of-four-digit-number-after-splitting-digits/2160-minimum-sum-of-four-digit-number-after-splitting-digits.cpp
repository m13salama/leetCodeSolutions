#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
class Solution {
public:
    int minimumSum(int num) {
        init;
        int momo[4];
        for(int i=0; i<4; i++){
            momo[i] = num%10;
            num /= 10;
        }
        sort(momo,momo+4);
        
        int num1=0, num2=0;
        for(int i=0; i<4; i+=2){
            num1 = num1*10 + momo[i];
            num2 = num2*10 + momo[i+1];
        }
        return num1+num2;
    }
};