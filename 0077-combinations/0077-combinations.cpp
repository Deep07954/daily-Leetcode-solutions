class Solution {
public:
vector<vector<int>>result;
void solve(int n,vector<int>&ans,int start,int k){
    if(ans.size()==k ){
        result.push_back(ans);
        return;
    }
    if(start>n){
        return;
    }
    
    ans.push_back(start);
    solve(n,ans,start+1,k);
    ans.pop_back();
    solve(n,ans,start+1,k);
   
    
    
}
    vector<vector<int>> combine(int n, int k) {
        vector<int>ans;
        int start=1;
        solve(n,ans, start,k);
        return result;
    }
};