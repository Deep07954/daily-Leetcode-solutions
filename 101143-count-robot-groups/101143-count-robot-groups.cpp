class Solution {
public:
    
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        int n=position.size();
        vector<double>meet(n,-1);
        vector<int>st;
         for(int i=n-1;i>=0;i--){
             while(!st.empty()){
                 int j=st.back();
                 long long gap=1LL*position[j]-position[i]-distance;
                 if(gap<=0){
                     meet[i]=0;
                     break;
                 }
                 if(speed[i]<=speed[j]){
                     st.pop_back();
                     continue;
                 }
                 double catchup=(double)gap/(speed[i]-speed[j]);
                 if(meet[j]==-1||catchup<=meet[j]){
                     meet[i]=catchup;
                     break;
                 }
                 st.pop_back();
             }
             st.push_back(i);
         }
        int grps=0;
        for(auto t: meet){
            if(t==-1)grps++;
        }
        return grps;
    }
};