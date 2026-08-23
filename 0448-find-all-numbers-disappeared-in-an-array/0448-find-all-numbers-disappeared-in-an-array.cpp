class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
     for(int i=0;i<n;i++)
    {
        int x=abs(nums[i]);
        int index=x-1;
        if(nums[index]<0){
            continue;
        }
        nums[index]=-(nums[index]);
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            ans.push_back(i+1);
        }
    }
    return ans;
         }
};