// code nhi chal rha h
class Solution {
  public:
    int celebrity(vector<vector<int> >& mat) {
        // code here
        stack<int> st;
        for(int i=0;i<mat.size();i++){
            st.push(i);
        }
        while(st.size()>1){
            int first=st.top();
            st.pop();
            int second=st.top();
            st.pop();
            if(mat[first][second]){
                st.push(second);
            }
            else{
                st.push(first);
            }
        }
        int ans=st.top();
        int countRow=0,countCol=0;
        for(int i=0;i<mat.size();i++){
            countRow+=mat[ans][i];
            countCol+=mat[i][ans];
        }
        if(countCol==mat.size()-1 && countRow==0){
            return ans;
        }
        return -1;
    }
};