class Solution {
public:
    int getSum(int a, int b) {
        int xr=a^b;
        int an = (a&b)<<1;
        while((xr & an)!=0){
            a=xr;
            b=an;
            xr=a^b;
            an=(a&b)<<1;
        }
        return xr^an;
    }
};