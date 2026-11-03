class Solution {
public:
long long totalhours(vector<int>&nums,int mid){
    long long total=0;
    for(int i=0;i<nums.size();i++){
        total+=ceil((double)(nums[i])/(double)(mid));

    }
    return total;
}
    int minEatingSpeed(vector<int>& nums, int h) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
long long total=totalhours(nums,mid);
if(total<=h){
    high=mid-1;
}else{
    low=mid+1;
}
        }
        return low;
    }
};