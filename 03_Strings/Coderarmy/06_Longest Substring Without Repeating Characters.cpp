class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> arr(256,0);
        int start=0,end=0,len=0;
        while(end<s.size()){
           while(arr[s[end]]){
            arr[s[start]]=0;
            start++;
           }
           arr[s[end]]=1;
           len=max(len,end-start+1);
           end++;

        }
        return len;
    }
};