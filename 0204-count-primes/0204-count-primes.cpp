class Solution {
public:
    int countPrimes(int n) {
        //sieve of erathosnese approach 
        if(n==0||n==1)
        return 0;
int count=0;
vector<bool>prime(n,true);
for(int i=2;i<n;i++){
    if(prime[i]){
        count++;
    }
    int j=2*i;
    while(j<n){
        prime[j]=false;
        j+=i;
    }

}
return count;
    }
};
//t.c -O(nloglogn) // n*(1/2+1/3+1/5+1/7 ......)