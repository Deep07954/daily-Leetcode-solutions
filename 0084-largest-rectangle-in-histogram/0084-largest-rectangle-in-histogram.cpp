class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
//         int maxArea=INT_MIN;
//         for(int i=0;i<n;i++){
//             int curr=heights[i];
//             int width=1;
//             for(int  j=i+1;j<n;j++ ){
//                 if(heights[j]>=heights[i]){
// width++;
//                 }else {
//                     break;
//                 }
//             }
//             for(int j=i-1;j>=0;j--){
//                  if(heights[j]>=heights[i]){
// width++;
//                 }else {
//                     break;
//                 }
            
//             }
//             int area=curr*width;
//             maxArea=max(area,maxArea);
//         }
//         return maxArea;
stack<int>st;
//NSR
vector<int>NSR(n,n);

for(int i=n-1;i>=0;i--){
    while(!st.empty() && heights[st.top()]>=heights[i]){
        st.pop();
    }
    NSR[i]=st.empty()?n:st.top();
    st.push(i);
    
}
while(!st.empty())st.pop();
vector<int>prev(n,-1);

for(int i=0;i<n;i++){
     while(!st.empty() && heights[st.top()]>=heights[i]){
        st.pop();
    }
    prev[i]=st.empty()?-1:st.top();
    st.push(i);
}

int width=1;
int maxArea=INT_MIN;
for(int i=0;i<n;i++){
    width=NSR[i]-prev[i]-1;
int area=heights[i]*width;
maxArea=max(area,maxArea);
}
return maxArea;
    }
};