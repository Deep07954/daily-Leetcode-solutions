class Solution {
public:
    int minOperations(vector<int>& arr, int k) {
         int n=arr.size();
         int total=0;
         for(auto num:arr){total+=num;} 
         int target=total-k;
         if(target<0)return -1;
         if(target==0){
            return n;
         }
      unordered_map<int,int>mp;
      mp[0]=-1;
     int maxL=INT_MIN;
    int curr=0;
      for(int i=0;i<n;i++){
          curr+=arr[i];
          if(mp.find(curr-target)!=mp.end()){
              maxL=max(maxL,i-mp[curr-target]);
          }
           if(mp.find(curr)==mp.end()){
              mp[curr]=i;
          }
      }
      return maxL==INT_MIN?-1:n-maxL;
     
    }
};
