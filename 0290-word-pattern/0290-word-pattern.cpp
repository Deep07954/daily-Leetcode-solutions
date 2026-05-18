class Solution {
public:
    bool wordPattern(string pattern, string s) {
      vector<string> words;
        string temp="";

        // split string by spaces
        for(char c:s){
            if(c==' '){
                words.push_back(temp);
                temp="";
            }
            else{
                temp+=c;
            }
        }

        words.push_back(temp);

        // length mismatch
        if(words.size()!=pattern.size())
            return false;

        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;

        for(int i=0;i<pattern.size();i++){

            char ch=pattern[i];
            string word=words[i];

            // existing mapping check
            if(mp1.count(ch)){

                if(mp1[ch]!=word)
                    return false;
            }

            else{

                // word already mapped to another char
                if(mp2.count(word))
                    return false;

                mp1[ch]=word;
                mp2[word]=ch;
            }
        }

        return true;
    }
};