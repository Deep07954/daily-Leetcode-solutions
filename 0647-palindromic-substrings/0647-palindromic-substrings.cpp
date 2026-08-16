class Solution {
public:
int dp[1001][1001];
bool check(string &s,int i,int j){
    if(i>j){
        return true;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(s[i]==s[j]){
        return dp[i][j]=check(s,i+1,j-1);
    }
    return dp[i][j]=false;
}
    int countSubstrings(string s) {
        int n=s.length();
        int count=0;
        memset(dp,-1,sizeof(dp));
        //dp[i][j]==-1 mtlb humne abhi solv enhi kiya isko agar 0 hai to flase hai 1 hai to true hai palindrome hai
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                // bool ispalindrome=true;
                // int l=i;
                // int r=j;
                // while(l<r){
                //     if(s[l]!=s[r]){
                //         ispalindrome=false;
                //         break;
                //     }
                //     l++;
                //     r--;
                // }
                
                if(check(s,i,j)){
                    count++;
                }
            }
            
        }
        return count;
    }
};