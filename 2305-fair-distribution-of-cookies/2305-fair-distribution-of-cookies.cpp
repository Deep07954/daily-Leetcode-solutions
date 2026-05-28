class Solution {
public:
int result;
void solve(int i,vector<int>&ans,vector<int>&cookies,int k){
    int n=cookies.size();
    if(i>=n||i<0){
        int maxm=*max_element(begin(ans),end(ans));
        result=min(maxm,result);
        return;
    }
   
    for(int j=0;j<k;j++){
        ans[j]+=cookies[i];
        solve(i+1,ans,cookies,k);
        ans[j]-=cookies[i];
// optimization
            if(ans[j] == 0)
                break;
    }
}
    int distributeCookies(vector<int>& cookies, int k) {
        result=INT_MAX;
        vector<int>ans(k,0);
        solve(0,ans,cookies,k);
        return result;
    }
};