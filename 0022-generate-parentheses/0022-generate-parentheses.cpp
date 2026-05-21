class Solution {
public:
vector<string>result;
bool isvalid(string &ans){
    int count=0;
    for(auto &ch:ans){
        if(ch=='('){
            count++;
        }
        else
        {count--;
        if(count<0)
        return false;}
    }
   return count==0;
}
void solve(string &ans,int n){
    if(ans.length()==2*n){
    if(isvalid(ans)){
        result.push_back(ans);
    }
    return;
    }
    ans.push_back('(');
    solve(ans,n);
    ans.pop_back();

    //
    ans.push_back(')');
    solve(ans,n);
    ans.pop_back();
}
    vector<string> generateParenthesis(int n) {
        string ans="";
        solve(ans,n);
        return result;
    }
};