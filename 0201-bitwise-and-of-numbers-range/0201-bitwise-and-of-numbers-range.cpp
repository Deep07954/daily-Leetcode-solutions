class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
      //approach-2
    int shift=0;
    while(left!=right){
        left>>=1;
        right>>=1;
        shift++;
    }
    return right<<shift;

    //           while(right>left){
    //         right=right&(right-1);
    //     }
    //  return right;
    }
};