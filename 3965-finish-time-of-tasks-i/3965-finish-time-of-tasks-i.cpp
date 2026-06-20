class Solution {
public:
    long long dfs(unordered_map<int,vector<int>> &adj,int i,vector<int>&ans){
        if(adj[i].empty())
            return ans[i];
        long long latest=LLONG_MIN;
        long long earliest=LLONG_MAX;
 for(auto &child: adj[i]){
     long long t=dfs(adj,child,ans);
         latest=max(latest,t);
     earliest=min(earliest,t);
 }
         
        return 2*latest-earliest+ans[i];
     
 }
        
    
    long long finishTime(int n, vector<vector<int>>& edges, vector<int>& baseTime) {
        unordered_map<int,vector<int>>adj;
        for( auto e:edges){
            int u=e[0];
            int v=e[1];
            adj[u].push_back(v);
        }
       
           return dfs(adj,0,baseTime);
        
    }
};