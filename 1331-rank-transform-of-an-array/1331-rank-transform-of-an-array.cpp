class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end(),[&](const int a,const int b){
            return arr[a]<arr[b];
        });
        int prev=INT_MAX;
        int rank=0;
        vector<int>res(n,0);
        for( auto & i :ans){
            if(prev!=arr[i]){
                prev=arr[i];
                rank++;
            }
            res[i]=rank;
        }
        return res;
       
    }
};