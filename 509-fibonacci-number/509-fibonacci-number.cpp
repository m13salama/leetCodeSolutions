class Solution {
public:
    long long int dp[35];
    
    int recurs(int n)
    {
        if(n<0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        
        return recurs(n-1)+recurs(n-2);
    }

    int fib(int n) {
        memset(dp,-1,sizeof(dp));
        dp[0]=0,dp[1]=1;
        
       return recurs(n);
        
    }
};