class Solution {
    public:
        int charIntoNum(char ch){
            switch(ch){
                case 'I': return 1;
                case 'V':return 5;
                case 'X':return 10;
                case 'L':return 50;
                case 'C':return 100;
                case 'D':return 500;
                case 'M':return 1000;
                default:return 0;
            }
        }
        int romanToInt(string s) {
            int ans=0;
            int n=s.size();
            for(int i=0;i<s.size();i++){
                if(i < n - 1 && charIntoNum(s[i]) < charIntoNum(s[i + 1])) {
                    ans-=charIntoNum(s[i]);
                }
                else{
                    ans+=charIntoNum(s[i]);
                } 
            }
            return ans;
        }
    };