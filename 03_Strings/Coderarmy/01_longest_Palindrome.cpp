class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> lowercase(26,0);
        vector<int> uppercase(26,0);
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'){
                lowercase[s[i]-'a']++;
            }
            else{
                uppercase[s[i]-'A']++;
            }
        }
        int count=0;
        bool flag=false;
        for(int i=0;i<lowercase.size();i++){
            if(lowercase[i]%2==0){
                count+=lowercase[i];
            }
            else{
                flag=true;
                count=count+lowercase[i]-1;
            }
            if(uppercase[i]%2==0){
                count+=uppercase[i];
            }
            else{
                flag=true;
                count=count+uppercase[i]-1;
            }
        }
        if(flag){
            return count+1;
        }
        return count;
    }
};