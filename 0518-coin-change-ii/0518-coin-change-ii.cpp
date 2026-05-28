class Solution {
public:

int n;
int t[301][5001];
int solve(int idx,int amount,vector<int>& coins){
    if(idx>=n||amount<0){
 
        return 0;
    }
    if(amount==0){
        return t[idx][amount]= 1;
    }
     if(t[idx][amount] != -1)
            return t[idx][amount];
    
    if(coins[idx]>amount){
        return t[idx][amount]= solve(idx+1,amount,coins);
    }
    
   int coin=coins[idx];
//take
     int take=   solve(idx,amount-coin,coins);
     int skip=solve(idx+1,amount,coins);
     return t[idx][amount]=(take+skip);
    
}
    int change(int amount, vector<int>& coins) {
        n=coins.size();
        memset(t,-1,sizeof(t));
      return  solve(0,amount,coins);
    }
};