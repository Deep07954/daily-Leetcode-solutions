class Solution {
public:
int Digitsum(int n){
    int ans=0;
    while(n>0){
ans+=n%10;
n=n/10;
    }
    return ans;
}
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        int res;
        int sum=INT_MAX;
      for(int i=0;i<n;i++){
       res=Digitsum(nums[i]);
       if(i==res){
        sum=min(sum,res);
       }
      }
      return sum==INT_MAX?-1:sum;
    }
};