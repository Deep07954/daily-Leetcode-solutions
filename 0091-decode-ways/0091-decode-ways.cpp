class Solution {
public:
// int dp[101];
// int solve(int i,string &s ,int &n){
//     if(dp[i]!=-1){
//         return dp[i];
//     }
//     if(i==n){
//         return dp[i]=1;
//     }
//     if(s[i]=='0'){
//         return dp[i]=0;
//     }
//     int result=solve(i+1,s,n);
//     if(i+1<n){
//         if(s[i]=='1'|| (s[i]=='2'&&s[i+1]<='6')){
//             result+=solve(i+2,s,n);
//         }
//     }
//     return dp[i]=result;
// }
    int numDecodings(string s) {
        int n=s.length();
        // memset(dp,-1,sizeof(dp));
        // return solve(0,s,n);
        // vector<int>dp(n+1,0);
     //dp[i]=no of decode ways rom 1 to n ab solve(i+1) ko change krdo dp[i+1]main aur result ho ajyega dp[i] to dp[i]=dp[i+1] se laa rhe result
     // jo dp[i] ki values hai wo hum aage wale valeus se laa rhe mtlb dp[i+1] or dp[i+2] to loop ulta chlega 
    //   dp[n]=1;
      //aisa isliye hog akyunki jab last idnex pe pauch jaye to decode krne ka tarike mila 1 ; simialr to i==n return 1

        // for(int i=n-1;i>=0;i--){
        //     if(s[i]=='0'){
        //          dp[i]=0;
        //     }else {
        //     dp[i]=dp[i+1];
        //     if(i+1<n){
        // if(s[i]=='1'|| (s[i]=='2'&&s[i+1]<='6')){
        //     dp[i]+=dp[i+2];
        // }
        // }
        //     }
        // }
        // return dp[0];
        //t.c O(N)  //S.C o(N)
        //SPACE OPTIMIZED CODE FROM BOTTOM UP APPROACH
        // value jo hai wo dpeend krta hai i+1 and i+2 pe i ka 
        //suppose kro i==n-1 to i+1 dp[i+1]=1 kyunki dp[n]=1 to b=i+1 and ci+2
        int a; //dp[i]
        int b=1; //dp[i+1]
        int c=0; //dp[i+2] out o fbound 
        for(int i=n-1;i>=0;i--){
            a=0;
            if(s[i]=='0'){
                a=0;
            }else {
                a=b;
 if(s[i]=='1'|| (s[i]=='2'&&s[i+1]<='6')){
           a+=c;
        }
            }
        //a dp[i] b dp[i+1] c dp[i+2] to ab dp[i+1] bnega dp[i] and dp[i+2] benga dp[i+1]
        c=b;
        b=a;
        } 
     return b;
    }
};