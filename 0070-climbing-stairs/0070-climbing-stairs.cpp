class Solution {
public:
// int dp[46];
// int solve(int n){
//     if(n<0)
//     return 0;
//     if(n==0)
//     return 1;
//     if(dp[n]!=-1)
//     return dp[n];

//     return dp[n]=solve(n-1)+solve(n-2);
// }
    int climbStairs(int n) {
       //top down approach
    //    memset(dp,-1,sizeof(dp));
    //   int result=solve(n);
    //   return result;
    //bottom up
    // int dp[46];
    // dp[1]=1;
    // dp[2]=2;
    // dp[3]=3;
    // for(int i=3;i<=n;i++){
    //     dp[i]=dp[i-1]+dp[i-2];

    // }
    // return dp[n];
    //space optimization
   
int a=1;
int b=2;
int c=0;
 if(n<=1)
    return a;
    if(n==2)
    return b;
for(int i=3;i<=n;i++){
    c=a+b;
    a=b;
    b=c;
}
return c;

        }
};