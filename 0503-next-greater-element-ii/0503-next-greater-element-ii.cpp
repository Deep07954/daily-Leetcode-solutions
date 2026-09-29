class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        vector<int>res(2*n,-1);
        vector<int>temp(nums);
        temp.insert(temp.end(),nums.begin(),nums.end());
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty()&& temp[st.top()]<=temp[i]){
                st.pop();
            }
            if(!st.empty()){
             res[i]=temp[st.top()];}
            st.push(i);
        }
       res.resize(n);
        return res;

    }
};