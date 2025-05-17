class Solution {
    public:
        void recursionCall(int n,vector<string> &ans, string &temp,int leftCount,int rightCount){
            if((leftCount+rightCount==2*n)){
                ans.push_back(temp);
                return;
            }
            if(leftCount<n){
                temp.push_back('(');
                recursionCall(n,ans,temp,leftCount+1,rightCount);
                temp.pop_back();
            }
            if(rightCount<n && rightCount<leftCount){
                 temp.push_back(')');
                recursionCall(n,ans,temp,leftCount,rightCount+1);
                temp.pop_back();    // backtraking
            }   
        }
        vector<string> generateParenthesis(int n) {
            string temp;
            int index=0;
            int leftCount=0,rightCount=0;
            vector<string> ans;
            recursionCall(n,ans,temp,leftCount,rightCount);
            return ans;
        }
    };