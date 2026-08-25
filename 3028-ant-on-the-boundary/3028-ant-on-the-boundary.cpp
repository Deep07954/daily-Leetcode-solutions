class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n=nums.size();
        int pos=0;
        int count=0;
        for(auto x:nums){
if(x>0){
    pos+=x;
}else {
    pos-=abs(x);
}
if(pos==0){
    count++;
}
        }
        return count;
    }
};