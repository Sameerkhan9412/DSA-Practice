// logic theek h but code run nhi krrha h
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for(int i=0;i<s.size();i++){
            if(!s.empty() && s[i]=='#' && !st1.empty()){

                st1.pop();
            }
            else{
                st1.push(s[i]);
            }
        }
        for(int i=0;i<t.size();i++){
            if(!t.empty() &&t[i]=='#'&& !st2.empty()){
                st2.pop();
            }
            else{
                st2.push(t[i]);
            }
        }
        while(!st1.empty() && !st2.empty()){
            if(st1.top()==st2.top()){
                st1.pop();
                st2.pop();
            }
            else {
                return false;
            }
        }
        if(st1.empty() && st2.empty()){
            return true;
        }
        return false;
    }
};