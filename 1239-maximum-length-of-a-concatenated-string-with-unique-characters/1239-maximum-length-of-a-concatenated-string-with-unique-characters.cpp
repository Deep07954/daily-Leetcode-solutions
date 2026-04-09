class Solution {
public:
void dfs(int idx,int temp,int &result,vector<int>&uniqueChar){
    result=max(result,__builtin_popcount(temp));
    for(int i=idx;i<uniqueChar.size();i++){
        if((temp&uniqueChar[i])==0){
            
            dfs(i+1,temp | uniqueChar[i],result,uniqueChar);
        }
    }
}
    int maxLength(vector<string>& arr) {
        int n = arr.size();
        vector<int> uniqueChar;
        for (string& s : arr) {
            unordered_set<char> st(s.begin(), s.end());
            // ye check krega kya arr main "aa","bb,""cc type ki strign hai jo
            // khudme hi duplciates ho
            if (st.size() != s.length())
                
            continue; // ye skip kr dega aisi string ko such "aa"
            int val = 0;
            for (char& c : s) {
                val = val | (1 << (c - 'a'));
            }
            uniqueChar.push_back(
                val); // BINARY MAIN CONVERT KR DIYA STRIGN TO NUMBER
        }
        int result = 0;
      
        dfs(0,0,result,uniqueChar);
        return result;
    }
};