class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n=nums.size();
       int minpos=-1;
       int maxpos=-1;
int culprit=-1;
long long ans=0;
for(int i=0;i<n;i++){
    if(nums[i]<minK ||nums[i]>maxK){
        culprit=i;
    }
    if(nums[i]==minK){
        minpos=i;
    }
    if(nums[i]==maxK){
        maxpos=i;
    }
    long long index=min(minpos,maxpos);
    long long temp=index-culprit;

    ans+= (temp<=0)? 0: temp;
}
return ans;
    }
};