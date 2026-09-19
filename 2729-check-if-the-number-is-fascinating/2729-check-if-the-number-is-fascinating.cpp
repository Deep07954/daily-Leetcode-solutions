class Solution {
public:
    bool isFascinating(int n) {
        int m=2*n;
        int o=3*n;
        string res= to_string(n)+to_string(m)+to_string(o);
    if(res.length()!=9)return false;
    vector<int>freq(10,0);
    for(auto c:res){
        int digit=c-'0';
        if(digit==0 ||freq[digit]){
            return false;
        }
        freq[digit]++;
    }
    return true;
    }
};