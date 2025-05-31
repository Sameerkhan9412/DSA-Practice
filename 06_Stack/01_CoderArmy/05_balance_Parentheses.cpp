
class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<int> st;
        if(s.size()==0) return true;
        for(int i=0;i<s.size();i++){
            if(s[i]=='['|| s[i]=='{' || s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==']'){
               if(!st.empty() && st.top()=='[' ){
                   st.pop();
               } 
               else{
                   return false;
               }
            }
            else if(s[i]=='}'){
                if(!st.empty() && st.top()=='{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else {
                if(!st.empty() && st.top()=='('){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.size()>0) return false;
        return true;
    }
};