class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
while(pq.size()>1){
    int prev=pq.top();
    pq.pop();
    int current=pq.top();
    pq.pop();
    if(prev!=current){
        pq.push(prev-current);
    }

}
if(pq.empty())return 0;
return pq.top();
    }
};