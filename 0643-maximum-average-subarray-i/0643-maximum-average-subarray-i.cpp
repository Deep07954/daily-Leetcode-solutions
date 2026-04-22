class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
    //     if(n==1)
    //     return (double)nums[0];
    //   double maxsum=0.0;
    //     double average=0;
    //     for(int i=0;i<=n-k;i++){
    //        double sum=0.0;
    //         for(int j=i;j<i+k;j++){
    //             sum+=(double)nums[j];

    //         }
    //         average=sum/k;
    //         maxsum=max(average,maxsum);
    //     }
    //     return maxsum;
    double sum=0.0;
    double maxsum=0.0;
  for(int i=0;i<k;i++){
    sum+=nums[i];
  }
  maxsum=sum;
  for(int i=k;i<n;i++){
    sum+=nums[i];
    sum-=nums[i-k];
    maxsum=max(sum,maxsum);
  }
  return maxsum/k;
      }
};