class Solution {
public:
    int countCommas(int n) {
       if(n<=999)
           return 0;
        int count=0;
        // for(int i=1000;i<=n;i++){
        //     count=n-1000+1;
        // }
        count=n-999;
        return count;
    }
};