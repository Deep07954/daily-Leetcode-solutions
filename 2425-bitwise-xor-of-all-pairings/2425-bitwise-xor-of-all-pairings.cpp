class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        if(n1==1 && n2==1){
            return nums1[0]^nums2[0];
        }
        if( n1%2==0 && n2%2==0)
        return 0;
        
        int xor1=0;
        int xor2=0;
        for(auto x:nums1){
xor2^=x;
        }
        for(auto y:nums2){
              xor1^=y;
        }
    if(n2%2==1 && n1%2==0){
return xor2;
    }
    if(n2%2==1 && n1%2==1){
       return  xor2^xor1;
    }
        return xor1;
    }
};