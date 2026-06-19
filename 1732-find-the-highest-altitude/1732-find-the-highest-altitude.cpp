class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       
        int count=0;
        int maxmcount=0;
        for(int i=0;i<gain.size();i++){
               count+=gain[i];
            maxmcount=max(maxmcount,count);
         
        }
        return maxmcount;
    }
};