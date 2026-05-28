class Solution {
public:
int n;
int t[13][10001];
int solve(int i,int amount,vector<int>&coins){
    if(i<0||i>=n||amount<0){
        return INT_MAX-1;
    }
    if(amount==0){
        return 0;
    }
    if(t[i][amount]!=-1){
        return t[i][amount];
    }
    int take=1+solve(i,amount-coins[i],coins);
    int skip=solve(i+1,amount,coins);
    return t[i][amount]=min(take,skip);
}

// vector<vector<int>>result;
// void solve(int idx,int amount,vector<int>& coins,vector<int> &ans){
//     if(idx>=n||amount<0){
 
//         return ;
//     }
//     if(amount==0){
//         result.push_back(ans);
//         return;
//     }
//     //take
//     int coin=coins[idx];
//     ans.push_back(coins[idx]);
// solve(idx,amount-coin,coins,ans);
// ans.pop_back();
// solve(idx+1,amount,coins,ans);
   
    

    
// }
    int coinChange(vector<int>& coins, int amount) {
        //  n=coins.size();
    //      vector<int>ans;
     
    //   solve(0,amount,coins,ans);
    //   if(result.size()==0)
    //   return -1;
    //  int mini=INT_MAX;
    //  for(auto &v:result){
    //     mini=min(mini,(int)v.size());
    //  }
    //  return mini;
     n=coins.size();
        memset(t,-1,sizeof(t));
      int ans=  solve(0,amount,coins);
      return ans>=INT_MAX-1?-1:ans;
    }
};