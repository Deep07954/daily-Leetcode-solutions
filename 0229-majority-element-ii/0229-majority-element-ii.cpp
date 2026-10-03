class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         int n=nums.size();
        //O(n)  && space O(1);
         int candidate1=0;
         int count1=0;
int candidate2=0;
int count2=0;
        for(auto x:nums){
        if(x==candidate1){
            count1++;
        }else if(x==candidate2){
            count2++;
        }else if(count1==0){
            candidate1=x;
            count1++;
        }else 
        if(count2==0){
            candidate2=x;
            count2++;
        }
        else {
            count1--;
            count2--;
        }
        }
    vector<int>result;
    int f1=0;
    int f2=0;
    for(int &num:nums){
        if(num==candidate1){
            f1++;
        }else if(num==candidate2){
            f2++;
        }
    }
    if(f1>floor(n/3)){
    result.push_back(candidate1);}
    if(f2>floor(n/3)){
        result.push_back(candidate2);

    }
    return result;
    }
};