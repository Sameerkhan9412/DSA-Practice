class Solution {
    public:
        int maxDepth(string s) {
            int ans=0;
            int curr=0;
            for(int i=0;i<s.size();i++){
                if(s[i]=='('){
                    curr++;
                }
                if(s[i]==')'){
                    curr--;
                }
                ans=max(curr,ans);
            }
            return ans;
        }
    };