class Solution {
public:
vector<string>result;
void solve(int n,string& ans,vector<bool> &used){
    //base case
    if(ans.length()==n){
        result.push_back(ans);
        return;
    }
    for(int i=1;i<=n;i++){
        if(used[i])
        continue;
        used[i]=true;
        ans.push_back(i+'0');
        solve(n,ans,used);
        ans.pop_back();
        used[i]=false;
    }
}
    string getPermutation(int n, int k) {
        string ans="";
        vector<bool>used(n+1,false);
        solve(n,ans,used);
 
        return result[k-1];

    }
};