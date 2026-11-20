class Solution {
public:
    bool isValidSerialization(string preorder) {
        int slot=1;
        stringstream ss(preorder);
        string item;
        while(getline(ss,item,',')){
            slot--;
            if(slot<0){
                return false;}

                if(item!="#"){
                    slot+=2;
                }
            }
        
        return slot==0;
    }
};