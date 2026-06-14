class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitsum=0;
        int sqsum=0;
        while(n>0){
            int digit=n%10;
            digitsum+=digit;
            sqsum+=pow(digit,2);
            n=n/10;
        }
        if(sqsum-digitsum<50)
            return false;
    return true;
    }
};