class Solution {
public:
int ans=0;
void solve(int n,int pos,vector<bool>&used){
    if(pos>n){
        ans++;
        return;
    }
    for(int i=1;i<=n;i++){
        if(!used[i] && (pos%i==0 || i%pos==0)){
            used[i]=true;
            solve(n,pos+1,used);
            used[i]=false;
        }
    }
}
    int countArrangement(int n) {
        vector<bool>used(n,false);
        
        solve(n,1,used);
        return ans;
    }
};