class Solution {
    public int[] rearrangeArray(int[] nums) {
        int n=nums.length;
        int[] res=new int[n];
        int pos=0;
        int neg=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0 ){
                if(pos<n){
                res[pos]=nums[i];
                pos+=2;}
            } else {
           if(neg<n){
                res[neg]=nums[i];
                neg+=2;}
            }
            
        }
                return res;
                }
}