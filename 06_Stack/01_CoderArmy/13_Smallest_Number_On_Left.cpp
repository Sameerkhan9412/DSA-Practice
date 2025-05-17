class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        // code here
        vector<int> ans(arr.size(),-1);
        stack<int> st;
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[i]<arr[st.top()]){
                ans[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};


//coderarmy k code bht shorts h , stack k , unhe bhi dekhna h vidoe me