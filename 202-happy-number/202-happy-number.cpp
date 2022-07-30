const static auto fast = []{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    bool isHappy(int n) {
        map<int, int> m;
        while(1){
            int res = square(n);
            if(res == 1) return true;
            if(m[res] == 1) return false;
            m[res]++;
            n = res;
            
        }
    }
    int square(int n){
        int res = 0;
        while(n != 0){
            int temp = n%10;
            res += pow(temp,2);
            n = n/10;
        }
        return res;
    }
};