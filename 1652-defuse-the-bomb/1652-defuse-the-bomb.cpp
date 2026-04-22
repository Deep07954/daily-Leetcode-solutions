class Solution {
public:
// int i;;
// int add(vector<int>& code, int k,int j){
//     int sum=0;
// for( int p=j;p<code.size();p++){
// sum+=code[p];
// }
// return sum;

    vector<int> decrypt(vector<int>& code, int k) {
        //  int n=code.size();
        // vector<int>result(n,0);
       
    
// //         for( i=0;i<n;i++){
// // if(k>0){
// //     code[i]=add(code,k,(i+1)%n);
// // }
// // // if(k<0){
// // //     nms[i]=add(nums,k,i+1);
// // // }
// // if(k==0){
// //     code[i]=0;
// // }
// int sum=0;
// for(int i=0;i<n;i++){
//     if(k==0){
//         result.push_back(0);
//     }
//     if(k<0){
//         for(int p=i-abs(k);p<=i;p++){
//            sum+=code[(p+n)%n];
          
//         }
//          result.push_back(sum);}  
//         else{
//         for(int p=i+1;p<=i+k+1;p++){
//             sum+=code[p%n];
          
//         }
//           result.push_back(sum);
//         }
          
// }




        
//         return result;
 int n = code.size();

        vector<int> result(n, 0);
        if (k == 0) {
            return result;
        }

        for (int i = 0; i < n; i++) {
            if (k < 0) {
                for (int j = i - abs(k); j < i; j++) {
                    result[i] += code[(j + n) % n];
                }
            } else {
                for (int j = i + 1; j < i + k + 1; j++) {
                    result[i] += code[j % n];
                }
            }
        }
        return result;
    }
};