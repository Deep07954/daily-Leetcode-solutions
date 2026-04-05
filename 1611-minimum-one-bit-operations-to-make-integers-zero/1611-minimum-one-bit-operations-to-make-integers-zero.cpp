class Solution {
public:
    int minimumOneBitOperations(int n) {
//   vector<int>F(31,0);
//   F[0]=1;
//   for(int i=1;i<=30;i++){
//     F[i]=2*F[i-1]+1;//ye jab ith bit sirf se ho eg 1000 10000
//   }
//   int result=0;
//   int sign=1; // ek baar + hoga ek baar minus alterante
//   //left se right jayenge
//   for(int i=30;i>=0;i--){
//     int ith_bit=(1<<i)&n;
//     if(ith_bit==0)
//     continue;
// if(sign>0){
//     result+=F[i];
// }
// else
// result-=F[i]; 

// sign=sign*(-1);

//       }
//         return result;
//     }
// }; //appraoch -2 gery vode to binary 
   int res = 0;
        // This loop implements the Gray-to-Binary conversion
        // which maps the Gray code 'n' back to its original integer index.
        while (n > 0) {
            res ^= n;
            n >>= 1;
        }
        return res;
        }
        };