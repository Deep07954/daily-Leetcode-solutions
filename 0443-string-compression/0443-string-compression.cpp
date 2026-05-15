class Solution {
public:
    int compress(vector<char>& chars) {
    int n=chars.size();
       int index=0;
      
       int i=0;
       while(i<n)
       {
         int count=0;
        char curr_char=chars[i];
        //avoid duplicates
        while(i<n &&curr_char==chars[i]){
            count++;
            i++;
        }
      //assign kro 
      chars[index]=curr_char;
      index++;
if(count>1){
    string count_str=to_string(count);
    for(auto &ch:count_str){
        chars[index]=ch;
        index++;
    }
}


       }
       return index;

    }
};