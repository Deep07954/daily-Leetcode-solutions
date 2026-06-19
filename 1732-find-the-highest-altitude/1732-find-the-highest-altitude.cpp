class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       
//         int count=0;
//         int maxmcount=0;
//         for(int i=0;i<gain.size();i++){
//                count+=gain[i];
//             maxmcount=max(maxmcount,count);
         
//         }
//         return maxmcount;
//     }
// };
// prefix sum ocncept used ehre 
//approach 2;
int n=gain.size();
vector<int>prefixsum(n+1,0);
prefixsum[0]=0;
for(int i=1;i<=n;i++){
    prefixsum[i]=prefixsum[i-1]+gain[i-1];
}
return *max_element(prefixsum.begin(),prefixsum.end());
    }
};