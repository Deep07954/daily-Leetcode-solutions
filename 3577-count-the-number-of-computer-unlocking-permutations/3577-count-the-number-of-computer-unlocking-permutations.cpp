class Solution {
public:

static const int MOD=1e9+7;
long long fact(int n){
    if(n<=1)
    return 1;
    
    return (1LL*n*fact(n-1))%MOD;
}
    int countPermutations(vector<int>& complexity) {
        int n=complexity.size();
       
        int count=0;
        for(int i=1;i<n;i++){
            if(complexity[0]>=complexity[i]){return 0;}

        }
        return (fact(n-1))% MOD;
    }
};