class Solution {
public:
int lowerbound(vector<int>&nums,int n,int target){
    int ans=n;
    int i=0;
    int j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(nums[mid]>=target){
            ans=mid;
            j=mid-1;
        }else {
            i=mid+1;
        }
    }
    return ans;
}
int upperbound(vector<int>&nums,int n,int target){
    int ans=n;
    int i=0;
    int j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(nums[mid]>target){
            ans=mid;
            j=mid-1;
        }else {
            i=mid+1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lb=lowerbound(nums,n,target);
        if(lb==n||nums[lb]!=target)return {-1,-1};
        return {lb,upperbound(nums,n,target)-1};
    }
};