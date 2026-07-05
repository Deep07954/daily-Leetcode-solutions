class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<int>left(n,-1),right(n,-1);
        int j=0;
        for(int i=0;i<n;i++){
            while(j<m && t[j]!=s[i])j++;
            if(j==m)break;
            left[i]=j;
            j++;
        }
        // if already a subsequence of it then
        if(left[n-1]!=-1)return true;
         j=m-1;
        for(int i=n-1;i>=0;i--){
            while(j>=0 && t[j]!=s[i])j--;
            if(j<0) break;
            right[i]=j;
            j--;
        }
        for(int i=0;i<n;i++){
            bool l= (i==0)||(left[i-1]!=-1);
            bool r=(i==n-1)||(right[i+1]!=-1);
            if(!l||!r) continue;
            int leftpos=(i==0)?-1:left[i-1];
            int rightpos=(i==n-1)?m:right[i+1];
            if(rightpos-leftpos>=2)
                return true;
        }
        return false;
    }
};