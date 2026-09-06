class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.length();
        int score;
        int count=0;
        for(int j=0;j<n;j++){
            score=0;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                score++;
            }
        }
            if(score==k)
            {
                count++;
            } 
            rotate(s.begin(),s.begin()+1,s.end());
        }
        return count;
    }
};