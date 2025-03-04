class Solution {
    public:
        bool solve(string &s,int i,int j){
            if(i>=j){
                return true;
            }
            if(s[i]==s[j]){
                return solve(s,i+1,j-1);
            }
            return false;
        }
        string longestPalindrome(string s) {
            int maxLen=INT_MIN;
            int startPoint=0;
            string ans;
            for(int i=0;i<s.size()-1;i++){
                for(int j=i;j<s.size();j++){
                    if(solve(s,i,j)==true){
                        if(j-i+1>maxLen){
                            maxLen=j-i+1;
                            startPoint=i;
                        }
                    }
                }
            }
            return s.substr(startPoint,maxLen);
        }
    };