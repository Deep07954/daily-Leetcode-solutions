class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n=seq.length();

//         vector<int>ans(n);
//        int depth=0;
//         for(int i=0;i<n;i++){
//            char ch=seq[i];
//             if(ch=='('){
//                 ans[i]=depth%2;
// depth++;
//             }else {
//                 ans[i]=depth%2;
//                 depth--;
//             }
//         }
//         return ans;
    // }
     vector<int>answer(n);

        int depth = 0;

        for(int i = 0; i < n; i++) {

            if(seq[i] == '(') {
                  answer[i] = depth % 2;

                depth++;

                
            }
            else {
depth++;

                answer[i] = depth % 2;
              
            }
        }

        return answer;}
};