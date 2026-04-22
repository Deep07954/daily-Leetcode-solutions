class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n= cardPoints.size();
       long long leftsum=0;
       long long rightsum=0;
        long long maxsum=0;
        for(int i=0;i<k;i++){
            leftsum+=cardPoints[i];
        }
        maxsum=leftsum;
        int rightindex=n-1;
        for(int i=k-1;i>=0;i--){
            leftsum-=cardPoints[i];
            rightsum+=cardPoints[rightindex];
            rightindex--;
            maxsum=max(maxsum,leftsum+rightsum);

        }

      
        return (int)maxsum;

    }
};