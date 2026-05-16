class Solution {
public:
    string countOfAtoms(string formula) {
        int n=formula.length();
        stack<map<string,int>>st;
        st.push(map<string,int>());
        int i=0;
        while(i<n){
            if(formula[i]=='('){
                st.push(map<string,int>());
                i++;
            }else if( formula[i]==')'){
                map<string,int>mp;
                mp=st.top();
                st.pop();
                i++;
               int mul=0;
               while(i<n && isdigit(formula[i])){
                mul=mul*10+(formula[i]-'0');
                i++;
               }
               //agr koi number nhi hua to oh 
               if(mul==0){
                mul=1;
               }
                // Current popped map:
                // {
                //     S : 1,
                //     O : 3
                // }

                // multiplier = 2

                // becomes:
                // {
                //     S : 2,
                //     O : 6
                // }
                // 
                for(auto &it:mp){
                    st.top()[it.first]+=it.second*mul;
                }
            }
            else {
                string atom;
                atom+=formula[i];
                i++;
                while(i<n && islower(formula[i])){
                    atom+=formula[i];
                    i++;
                }
                int num=0;
                while(i<n && isdigit(formula[i])){
                num=num*10+(formula[i]-'0');
                i++;
                }
                if(num==0){
                    num=1;
                }
                st.top()[atom]+=num;
            }
        }
        map<string,int>result=st.top();
        string ans;
        for(auto &p:result){
            ans+=p.first;
            if(p.second>1){
                ans+=to_string(p.second);
            }
        }
        return ans;

    }
};