class Solution {
public:
    bool isBalanced(string nums) {
        int sumodd=0;
        int sumeven=0;
        for(int i=0;i<nums.length();i++){
if(i%2==0){
    sumeven+=nums[i]-'0';
}else
{
    sumodd+=nums[i]-'0';
}
        }
        return sumeven==sumodd;
    }
};