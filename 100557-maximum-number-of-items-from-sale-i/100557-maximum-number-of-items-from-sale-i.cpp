class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n=items.size();
        vector<int>freeitems(n,0);
      
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if( i!=j){
                    if(items[j][0]%items[i][0]==0){
                        freeitems[i]++;
                    }
                }
            }
         
            
        }
        vector<int>memo(budget+1,0);
        
        
        for(int i=0;i<items.size();i++){
int cost=items[i][1];
            int value=1+freeitems[i];
             for(int j=budget;j>=cost;j--){
                 memo[j]=max(memo[j],memo[j-cost]+value);
             }
        }
        int minm=INT_MAX;
        for(int i=0;i<n;i++){
            minm=min(minm,items[i][1]);
        }
        int result=0;
        for(int p=0;p<=budget;p++){
            int remaining =budget-p;
            int extra=remaining/minm;
            result=max(result,memo[p]+extra);
        }
        return result;
        
    }
};