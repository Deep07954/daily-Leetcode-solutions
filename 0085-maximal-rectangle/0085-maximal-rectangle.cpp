class Solution {
public:
int largestrectangle(vector<int>heights){
    int n=heights.size();
    vector<int>nsr(n,n);
    stack<int>st;
    int maxArea=0;
    for(int i=n-1;i>=0;i--){
while(!st.empty()&& heights[st.top()]>=heights[i]){
    st.pop();
}
nsr[i]=st.empty()?n:st.top();
st.push(i);
    }
    vector<int>prev(n,-1);
    while(!st.empty())st.pop();

    for(int i=0;i<n;i++){
while(!st.empty()&& heights[st.top()]>=heights[i]){
    st.pop();
}
prev[i]=st.empty()?-1:st.top();
st.push(i);
    }
    for(int i=0;i<n;i++){
        int width=nsr[i]-prev[i]-1;
        int area=heights[i]*width;
        maxArea=max(area,maxArea);
    }
    return maxArea;
}
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.size()==0){
            return 0;
        }
        int n=matrix[0].size();
        vector<int>heights(n);
        int largest=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                int val=matrix[i][j]-'0';
                if(val==0){
heights[j]=0;
                }else {
                    heights[j]+=val;
                }
            }
            int maxArea=largestrectangle(heights);
            if(largest<maxArea){
                largest=maxArea;
            }
        }
        return largest;
        

    }
};