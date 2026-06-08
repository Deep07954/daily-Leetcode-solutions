class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
     vector<int>lessThanPivot;
     vector<int>equalToPivot;
     vector<int>greaterThanPivot;
     for(auto num:nums){
        if(num<pivot){
            lessThanPivot.push_back(num);
        }
        else if(num==pivot){
    equalToPivot.push_back(num);
        }
        else 
        greaterThanPivot.push_back(num);
        
     }
     for(int i=0;i<lessThanPivot.size();i++){
        nums[i]=lessThanPivot[i];
     }
   for (int i = 0; i < equalToPivot.size(); i++) {
            nums[lessThanPivot.size() + i] = equalToPivot[i];
        }

        for (int i = 0; i < greaterThanPivot.size(); i++) {
            nums[lessThanPivot.size() + equalToPivot.size() + i]
                = greaterThanPivot[i];
        }
     return nums;
    }
};