class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        auto comp=[&](vector<int>&a,vector<int>&b){
            int d1=a[0]*a[0]+a[1]*a[1];
            int d2=b[0]*b[0]+b[1]*b[1];
            return d1<d2;
        };
        nth_element(points.begin(),points.begin()+k,points.end(),comp);
        return vector<vector<int>>(points.begin(),points.begin()+k);
    }
};