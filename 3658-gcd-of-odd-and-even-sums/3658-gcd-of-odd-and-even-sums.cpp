class Solution {
public:
int gcd(int  s1,int s2){
    if(s2==0)
    return s1;

   int res= gcd(s2,s2 %s1);
   return res;
}
    int gcdOfOddEvenSums(int n) {
        if(n==1)
        return 1;
  int s1=0; //odd sum
  int s2=0;    //even sum
s1=n*n;
s2=n*(n+1);
  return gcd(s1,s2);
    }
};