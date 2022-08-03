#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    int hammingWeight(uint32_t n) {
        init;
        int count=0;
        while(n!=0){
        if(n&1) 
            count++;
          n= n>>1;
        }
        return count;
    }
};