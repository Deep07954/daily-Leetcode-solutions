class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string Y="";
        string X="";
        string other="";
        for(char c:s){
            if(c==y) Y+=c;
            else if(c==x) X+=c;
            else {
                other+=c;
            }
        }
        return Y+other+X;
    }
};