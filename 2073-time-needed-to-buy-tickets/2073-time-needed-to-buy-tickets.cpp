class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int req=tickets[k];
        int time=0;
        for(int i=0;i<tickets.size();i++){
            if(i<=k){
                time+=min(tickets[i],tickets[k]);
            }
            if(i>k){
                time+=min(tickets[i],req-1);
            }
        }
        return time;
    }
};