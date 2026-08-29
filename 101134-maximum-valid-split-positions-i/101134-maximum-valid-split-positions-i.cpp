class Solution {
public:
    int solve(vector<int>&arr){
        int m=arr.size();
        if(m<2)return 0;
        vector<int>pref(m);
        vector<int>suf(m);
        pref[0]=arr[0];
        for(int i=1;i<m;i++){
            pref[i]=gcd(pref[i-1],arr[i]);
        }
        suf[m-1]=arr[m-1];
        for(int j=m-2;j>=0;j--){
            suf[j]=gcd(suf[j+1],arr[j]);
        }
        int count=0;
        for(int i=0;i<m-1;i++){
            if(pref[i]==suf[i+1]){
                count++;
            }
        }
        return count;
    }
    int maxValidSplits(vector<int>& nums) {
        int n=nums.size();
        int maxscore=solve(nums);
        for(int i=0;i<n;i++){
             vector<int>arr;
            for(int j=0;j<n;j++){
           
            if(j!=i){
                arr.push_back(nums[j]);
            }
                
            }
            int score=solve(arr);
             maxscore=max(maxscore,score);
        }
        
       
        return maxscore;
    }
};