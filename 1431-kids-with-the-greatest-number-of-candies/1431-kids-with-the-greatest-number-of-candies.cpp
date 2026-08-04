class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxc=*max_element(candies.begin(),candies.end());
        int n=candies.size();
        vector<bool>res;
        for(int i=0;i<candies.size();i++){
if(candies[i]+extraCandies >= maxc){
    res.push_back(true);
}
else
{
    res.push_back(false);
}
        }
        return res;
    }
};