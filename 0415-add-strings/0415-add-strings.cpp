class Solution {
public:
string ans;
string solve(string &num1,string &num2,int i,int j,string ans,int carry){
    if(i<0 && j<0 && carry ==0)
       return "";
       //ek case solve kro
       int sum;
       sum=carry;
     
        if(i>=0){
            sum+=num1[i]-'0';}
            if(j>=0){
                sum+=num2[j]-'0';
            }
            carry=sum/10;
            ans=solve(num1,num2,i-1,j-1,ans,carry);
       
            ans+=(sum%10)+'0';
            
            
       return ans;
}
    string addStrings(string num1, string num2) {
        ans="";
        return solve(num1,num2,num1.size()-1,num2.size()-1,ans,0);
    }
};