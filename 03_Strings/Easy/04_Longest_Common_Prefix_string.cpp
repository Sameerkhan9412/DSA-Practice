class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            int n=strs.size();
            if(strs.empty()){
                return "";  //otherwiise vector empty hone pr segmentton fault ka error milega,
            }
            sort(strs.begin(),strs.end());
            if(strs.size()==1) return strs[0];
            string firstStr=strs[0];
            string lastStr=strs[strs.size()-1];
            string ans="";
            for(int i=0;i<firstStr.size();i++){
                if(firstStr[i]==lastStr[i]){
                    ans+=firstStr[i];
                }
                else{
                    break;
                }
            }
            return ans;
        }
    };

    approach 1:
    saare element ko first se compare se compare krao
    approach  2: 
    sort and 1 and last element compare and return ans;