class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int smallest=*min_element(nums1.begin(),nums1.end());

        if(smallest%2==1){ //it will convert all even to odd [1,4,7] 4 ko convert kr skte hai 4 -1 >=1
            return true;
        }
        // dusra conditon hai ki sare hi even  main convert ho uske liye sb even numbers hoen chahiye other wise agar smallest even hua to false 
        for(auto num:nums1){
            if(num%2==1){
                return false;
            }
        }
        return true;
    }
};