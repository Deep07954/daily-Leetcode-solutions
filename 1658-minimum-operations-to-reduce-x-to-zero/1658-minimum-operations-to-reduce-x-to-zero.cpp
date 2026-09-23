class Solution {
public:
// int minm;
// void solve(vector<int>&nums,int x,int count,int i,int j){
//     if(x==0){
// minm=min(minm,count);
// return;
//     }
//     else if(x<0||i>j||count>minm){
//         return;
//     }
// else {
//    solve(nums,x-nums[i],count+1,i+1,j);
// solve(nums,x-nums[j],count+1,i,j-1);}
// }
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
  
    //3 case possible hai left se minm ya right se ya fir dono side se
//concept same as subarrays um k dhundhan hai aisa subarray
int minm=INT_MIN;
// int count=0;
// int i=0;
// int j=n-1;

// solve(nums,x,0,0,n-1);
// if(minm==INT_MAX){
//     return -1;
// }
// return minm;
int total=0;
for(auto num:nums){
total+=num;
}
int target=total-x;
   int i=0;
   int j=0;
   
   if(target==0){
    return n;
   }
   if(target<0){
    return -1;
   }
   int sum=0;
   while(j<n){
    
sum+=nums[j];
while(sum>target && i<=j){
    sum-=nums[i];
    i++;
}
if(sum==target){
    minm=max(minm,j-i+1);
}
j++;
   }
   
return minm==INT_MIN?-1:n-minm;
    }
};