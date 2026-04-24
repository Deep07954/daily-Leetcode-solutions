class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.length();
        int count=0;
        int count2=0;
        for(char &c:moves){
if(c=='L'){
    count-=1;
}else
if(c=='R'){
    count++;
}else
    count2++;
}
        
        return abs(count)+count2;
    }
};