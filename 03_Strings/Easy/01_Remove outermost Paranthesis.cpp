class Solution {
    public:
        string removeOuterParentheses(string s) {
            string ans="";
            int count=0;
            for(int i=0;i<s.size();i++){
                if(s[i]==')'){
                    count--;
                }
                if(count!=0){`//count is checked before inserting '(' and count is check after inserting ')'
                    ans+=s[i];
                }
                if(s[i]=='('){
                    count++;
                }
                
            }
            return ans;
        }
    };