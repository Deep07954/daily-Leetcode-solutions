class Solution {
public:
    int M=1e9+7;
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        long long ans=0;
        long long count[3]={};
        for(auto x:nums){
            int p;
            if(x<a) p=0;
            else if(x<=b) p=1;
            else {
                p=2;
            }
            if(p==0) ans+=count[1]+count[2];
            else if(p==1) ans+=count[2];

            count[p]++;
        }
        return ans%M;
    }
};