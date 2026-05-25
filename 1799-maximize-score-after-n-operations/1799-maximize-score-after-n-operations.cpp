class Solution {
public:
   vector<int> dp;
// int score=0;
int gcd(int i,int j){
    if(j==0){
    return i;}
   return gcd(j,i%j);
}
// void solve(vector<int>& nums,vector<bool> &used,int opr,int result){
//     //2n size diya hai n operations krne hai   to nums[3,4,8,9] hrr time do pair select krne hai 2n/2 n operations aayenge right jab size 2n hoga to jab size n hoga to opr n/2 hoga to agr opr n/2 se jyda hua to return krna hoga
//     int n=nums.size();
//     if(opr>n/2){
// score=max(score,result);
//         return;
//     }
//     for(int i=0;i<n-1;i++)
//     {if(used[i])
//      continue;
//         for(int j=i+1;j<n;j++){
//             if(used[j])
//             continue;
//              used[i]=true;
//             used[j]=true;
//             solve(nums,used,opr+1,result+opr*gcd(nums[i],nums[j]));
//            used[i]=false;
//            used[j]=false;
//         }
//     }
   

// }
int solve(vector<int>& nums,int mask){

        int n = nums.size();

        // all elements used
        if(mask == (1<<n)-1){
            return 0;
        }

        // already calculated
        if(dp[mask]!=-1){
            return dp[mask];
        }

        int used = __builtin_popcount(mask);

        int op = used/2 + 1;

        int score = 0;

        for(int i=0;i<n-1;i++){

            if(mask & (1<<i))
                continue;

            for(int j=i+1;j<n;j++){

                if(mask & (1<<j))
                    continue;

                int newMask =
                mask | (1<<i) | (1<<j);

                score = max(
                    score,

                    op * gcd(nums[i],nums[j])

                    +

                    solve(nums,newMask)
                );
            }
        }

        return dp[mask]=score;
    }
    int maxScore(vector<int>& nums) {
        // int n=nums.size();
        // vector<bool>used(n,false);
        // solve(nums,used,1,0);
        // return score;
     int n = nums.size();

        dp.resize(1<<n,-1);

        return solve(nums,0);
    }
};