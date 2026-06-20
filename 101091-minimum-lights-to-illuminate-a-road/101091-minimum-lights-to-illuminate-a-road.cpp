class Solution {
public:
    
    int minLights(vector<int>& lights) {
        int n=lights.size();
        vector<int>prefix(n+1,0);
        for(int i=0;i<n;i++){
            
            if(lights[i]==0) 
                continue;
            int startindex=max(0,i-lights[i]);
                int end=min(n-1,i+lights[i]);
            
            prefix[startindex]++;
            if(end+1<n){
                prefix[end+1]--;
            }
        }
        int res=0;
        int range=0;
        int len=0;
        for(int i=0;i<n;i++){
            range+=prefix[i];
            if(range==0){
                len++;
            }
            else {
                res+=(len+2)/3;
                len=0;
            }
        }
        res+=(len+2)/3;
        return res;
    }
};