class Solution {
public:
    long long countCommas(long long n) {
       long long s= 1000;
       long long res=0;
       while(s<=n){
long long num=(n-s+1);
res+=num;
s*=1000;
       }
       return res;
    }
};