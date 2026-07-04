class Solution {
public:
    int minOperations(string s1, string s2) {
        int n=s1.length();
        
        int cnt=0;
        if(n==1){
            if(s1==s2){
                return 0;
            }
            if(s1[0]=='0' && s2[0]=='1'){
                return 1;
            }
        return -1;
        }
        int i=0;
      while(i<n){
          if(s1[i]=='0' && s2[i]=='1'){
              cnt++;
              i++;
          }
          else if(s1[i]=='1' && s2[i]=='0'){
               if(i+1<n && s1[i+1]=='1'&& s2[i+1]=='0'){
                   cnt++;
                   i+=2;
               }
              else {//single but by b it handle krna hoga
                  cnt+=2;
                  i++;
              }
          } else {i++;
                 }
          
      }
        return cnt; 
    }
};