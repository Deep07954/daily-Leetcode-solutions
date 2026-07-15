class Solution {
public:
int findfirst(vector<int>& nums, int target){
    int n=nums.size();
 int i=0;
        int j=n-1;
        int first=-1;
        int mid=i+(j-i)/2 ;
        while(i<=j){
           mid=i+(j-i)/2;
           if(nums[mid]==target){
               first=mid;
               j=mid-1;
           } else if(nums[mid]<target){
            i=mid+1;
           }else {
            j=mid-1;
           }
        }
        return first;
}
int findlast(vector<int>& nums, int target){
    int n=nums.size();
     int i=0;
        int j=n-1;
        int last=-1;
        int mid=i+(j-i)/2 ;
        while(i<=j){
           mid=i+(j-i)/2;
           if(nums[mid]==target){
               last=mid;
               i=mid+1;
           } else if(nums[mid]<target){
            i=mid+1;
           }else {
            j=mid-1;
           }
        }
        return last;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=findfirst(nums,target);
        if(first==-1)return {-1,-1};
        int last=findlast(nums,target);
        return {first,last};
       
    }
};