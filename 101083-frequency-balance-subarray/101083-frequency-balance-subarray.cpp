class Solution {
public:
   
    int getLength(vector<int>& nums) {
        int n=nums.size();
        int res=1;
        for(int i=0;i<n;i++){
            unordered_map<int,int>mp;
            unordered_map<int,int>freqcnt;
            for(int j=i;j<n;j++){
                if(mp[nums[j]]>0){
                    freqcnt[mp[nums[j]]]--;
                    if(freqcnt[mp[nums[j]]]==0)
                        freqcnt.erase(mp[nums[j]]);
                }
                mp[nums[j]]++;
                freqcnt[mp[nums[j]]]++;
                bool valid=false;
                if(mp.size()==1)
                    valid=true;
                else if(freqcnt.size()==2){
                    auto it=freqcnt.begin();
                    int f1=it->first;
                    ++it;
                    int f2=it->first;
                      int minm=min(f1,f2);
                    int maxm=max(f1,f2);
                    if(maxm==2*minm){
                        valid=true;
                    }
                    
                }
                if(valid){
                    res=max(res,j-i+1);
                }
            }
        }
            
        return res;
    }
};