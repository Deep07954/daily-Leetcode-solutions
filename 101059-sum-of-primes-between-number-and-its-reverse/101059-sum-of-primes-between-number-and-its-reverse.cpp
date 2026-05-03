class Solution {
public:
    int revnum(int n){
     int digit=0;
        while(n>0){
            digit=digit*10+(n%10);
            n=n/10;
        }
        return digit;
    }
    bool isPrime(int n){
        if(n<=1)
            return false;
        if(n==2) return true;
        if(n%2==0) return false;
        //odd values divisiblty
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0){
                return false;
            }
            
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
int rev=revnum(n);
        int l=min(n,rev);
        int r=max(n,rev);
        long long sum=0;
        for(int i=l;i<=r;i++){
            if(isPrime(i)){
                sum+=i;
            }
        }
        return (int)sum;
    }
};