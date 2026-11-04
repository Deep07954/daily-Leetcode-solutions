class Solution {
public:
bool canship(vector<int>&weights,int mid,int days){
    int n=weights.size();
    int noofD=1;
    int total=0;
    for(int i=0;i<n;i++){
        if(total+weights[i]>mid){
            noofD++;
            total=weights[i];
        }else {
            total+=weights[i];
        }
    }
    return noofD<=days;

}

    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
       int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canship(weights,mid,days)){
                ans=mid;
                high=mid-1;
            }else {
                low=mid+1;
            }
        }
return ans;
    }
};