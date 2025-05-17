vector<int> leftSmaller(vector<int> arr) {
        // code here
        vector<int> ans(arr.size(),-1);
        stack<int> st;
        for(int i=0;i<arr.size();i++){
            if(st.empty()){
                st.push(i);
            }
            else{
                if(arr[i]<arr[st.top()]){
                    while(!st.empty() && arr[i]<arr[st.top()]){
                        ans[st.top()]=arr[i];
                        st.pop();
                    }
                    st.push(i);
                }
                else{
                   st.push(i); 
                }
                
            }
        }
        return ans;