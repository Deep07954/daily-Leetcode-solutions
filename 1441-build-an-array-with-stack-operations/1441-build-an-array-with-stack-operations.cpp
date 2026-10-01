class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        vector<string>ans;
        stack<int>st;
        int j=0;
       
        for(int i=1;i<=n;i++){
           
        st.push(i);
        ans.push_back("Push");
          
            if(!st.empty() && target[j]!=st.top()){
                st.pop();
                ans.push_back("Pop");
            } else {
                j++;
                  if(j==target.size()){
            break;
          }
            }
            
        
        }
        
        return ans;
    }
};