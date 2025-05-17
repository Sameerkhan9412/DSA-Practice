// time complexity:O(n2)
// space complexity:O(n)
// not a better approach, gfg bhi tle derha h 😂
class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        vector<int> ans(arr.size(),-1);
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]<arr[j]){
                    ans[i]=arr[j];
                    break;
                }
            }
        }
        return ans;
    }
};


// more optimize then previous approach
// time complexity:o(n2)
// space complexity: o(n)
class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        vector<int> ans(arr.size(),-1);
        stack<int> st;
        for(int i=0;i<arr.size();i++){
            if(st.empty()){
                st.push(i);
            }
            if(arr[i]>arr[st.top()]){
                while(!st.empty() && arr[st.top()]<arr[i]){
                    ans[st.top()]=arr[i];
                    st.pop();
                }
                st.push(i);
            }
            else{
                st.push(i);
            }
        }
        return ans;
    }
};