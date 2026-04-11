class Solution {
public:
  vector<int> result;
    void helper(bitset<32>& bt, int n) {
        if(n == 0) {
            //It means we have generate all n elements
            result.push_back(bt.to_ulong());
            return;
        }
        
        //Generate the remaining (n-1) numbers from bt
        helper(bt, n-1);
        
        //flip the (n-1)th bit (to create a difference of just one bit)
        bt.flip(n-1);
        
        //Generate the remaining (n-1) numbers from bt but this time (n-1)th bit flipped (to create a difference of just one bit)
        helper(bt, n-1);}
    vector<int> grayCode(int n) {
         bitset<32> bt; //by default all bits are 0 i.e. {0000000.....000}
        
        result.clear();
        
        helper(bt, n);
        
        return result;
    }
};