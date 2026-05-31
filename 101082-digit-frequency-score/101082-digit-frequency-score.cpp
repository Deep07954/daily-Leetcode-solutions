class Solution {
public:
    
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mp;
        int m=n;
        while(m!=0){
            int rem=m%10;
            mp[rem]++;
            m=m/10;
        }
        int sum=0;
        while(n){
            int rem=n%10;
            sum+=rem*mp[rem];
            mp[rem]=0;
            n=n/10;
        }
        return sum;
    }
};