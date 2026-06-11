class Solution {
public:
    vector<int> constructArray(int n, int k) {
        int l=1;
        int r=k+1;
         vector<int>ans;
         while(l<=r){
            ans.push_back(l);
            l++;
            if(l<=r){
                ans.push_back(r);
                r--;
            }
         }
         for(int i=k+2;i<=n;i++){
            ans.push_back(i);
         }
         return ans;
    }
};