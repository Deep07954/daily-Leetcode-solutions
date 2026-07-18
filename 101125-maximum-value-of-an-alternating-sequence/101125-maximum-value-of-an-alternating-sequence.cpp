class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1) return s;
        long long up=(n+1)/2 -1;
        long long up2=n/2 -1;
        return max(s+up*(m-1),s+m+up2*(m-1));
        
    }
};