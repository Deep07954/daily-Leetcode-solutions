class Solution {
public:
int M=1e9+7;
typedef long long ll;
ll power(ll base,ll exp){
    if(exp==0)
    return 1;
    ll half=power(base,exp/2);
    ll result=(half*half)%M;
    if(exp%2==1){
        result*=base %M;
    }
return result%M;
}
int maxdepth( unordered_map<int,vector<int>>&adj,int root,int parent){
    int depth=0;
    for(auto child:adj[root]){
        if(child==parent)
        continue;
    depth=max(depth,maxdepth(adj,child,root)+1);
    }
    return depth;
}
    int assignEdgeWeights(vector<vector<int>>& edges) {

        unordered_map<int,vector<int>>adj;
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);

        }
        int d=maxdepth(adj,1,-1);
        return power(2,d-1);

    }
};