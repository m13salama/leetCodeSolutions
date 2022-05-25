class Solution {
public:
bool isPowerOfFour(int n) {
        if(n<=0)return false;
        if(n==1)return true;
        bool flag = false;
        
		if(n & (n-1))return false;   //Checking whether it is a power of 2 or not
        else{                       //If it is power of 2 then count the position of the 1 bit
            int pos(0);             //the position must be odd as we muliply *2*2
            while(n>0){
                pos++;
                n = n >> 1;
            }
            return pos % 2 == 0 ? false : true;
        }
}
};