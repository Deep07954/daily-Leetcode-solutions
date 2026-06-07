class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int maxarea=0;
        while(left<right){
            int width=right-left;
            int currentArea=width*min(height[right],height[left]);
if(height[left]<=height[right]){
    left++;
}
else
if(height[right]<height[left]){
right--;
}
maxarea=max(currentArea,maxarea);
        }
        return maxarea; 
    }
};