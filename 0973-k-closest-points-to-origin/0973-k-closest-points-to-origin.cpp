class Solution {
public:
// static bool comp(vector<int>&a,vector<int>&b){
//             int d1=a[0]*a[0]+a[1]*a[1];
//             int d2=b[0]*b[0]+b[1]*b[1];
//             return d1<d2;
//         };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        //t.c O(N) AVG  AND WORST TIME : O(N^2);
        //APPROACH 1
        // auto comp=[&](vector<int>&a,vector<int>&b){
        //     int d1=a[0]*a[0]+a[1]*a[1];
        //     int d2=b[0]*b[0]+b[1]*b[1];
        //     return d1<d2;
        // };
// SECOND WAY OF USING COMP  USIGN STATIC 


        // nth_element(points.begin(),points.begin()+k,points.end(),comp);
        // return vector<vector<int>>(points.begin(),points.begin()+k);
//approach 2 using max heap
priority_queue<pair<int,int>> pq;
for(int i=0;i<points.size();i++){
    int d1=points[i][0]*points[i][0]+points[i][1]*points[i][1];
    pq.push({d1,i});
    if(pq.size()>k){
    pq.pop();}
}
vector<vector<int>>ans;
while(!pq.empty()){
    ans.push_back(points[pq.top().second]);
    pq.pop();
}
return ans;
    }
};