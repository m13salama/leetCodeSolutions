class Solution {
public:
    int fib(int n) {
        map<int,int> memo;
        return fib_memo(n, memo);

    }
    int fib_memo(int n, map<int,int>& memo) {
        if(memo[n] != 0){
            return memo[n];
        } 
        if(n == 1 || n ==2) return 1;
        else if(n==0) return 0;
        else{
            int result = fib_memo(n-1,memo) + fib_memo(n-2, memo);
            memo[n] = result;
            return result;
        }
    }
};