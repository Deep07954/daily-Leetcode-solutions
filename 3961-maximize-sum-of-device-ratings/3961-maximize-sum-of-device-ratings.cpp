class Solution {
public:
    long long maxRatings(vector<vector<int>>& units) {
        int n=units.size();
        long long total_s1=0;
        long long total_s2=0;
        int min_s1=INT_MAX;
        int min_s2=INT_MAX;
        for(auto row:units){
            sort(row.begin(),row.end());
            int s1=row[0];
            min_s1=min(min_s1,s1);
            if(row.size()==1){
            total_s1+=s1;}
            if(row.size() > 1){
            int s2=row[1];
            total_s2+=s2;
            
            min_s2=min(min_s2,s2);}
        }
        return (units[0].size()>1)?total_s2-min_s2+min_s1:total_s1;
    }
};