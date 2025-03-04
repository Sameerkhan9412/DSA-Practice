class Solution {
    public:
        string reverseWords(string s) {
            reverse(s.begin(),s.end());
            string word="";
            string ans="";
            for(int i=0;i<s.size();i++){
                if(s[i]!=' '){
                    word+=s[i];
                }
                if((s[i]==' ' && word.size()>0)||((i==(s.size()-1))&&(word.size()>0))){
                    reverse(word.begin(),word.end());
                    ans+=" "+word;
                    word="";
                }
            }
            return ans.substr(1);
        }
    };
    // approach
    step 1:reverse string
    step 2: extract word and reverse and append