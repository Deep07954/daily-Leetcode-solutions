class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
vector<int>cumxor(n,0);
cumxor[0]=arr[0];
        vector<int>answer;
        for(int i=1;i<n;i++){
           cumxor[i]=cumxor[i-1]^arr[i];
        }

        for(auto query:queries){
            int L=query[0];
            int R=query[1];
            int result=cumxor[R]^(L==0?0:cumxor[L-1]);
            answer.push_back(result);
        }
        return answer;

    }
};