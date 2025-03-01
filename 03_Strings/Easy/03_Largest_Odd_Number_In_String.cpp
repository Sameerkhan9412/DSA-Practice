class Solution {
    public:
        string largestOddNumber(string num) {
            for(int i=num.size()-1;i>=0;i--){
                if((num[i]-'0')%2!=0){
                    return num.substr(0,i+1);
                }
            }
            return "";
        }
    };

    approach 1:
    step 1-> left to right 
    step 2: check element at i index, if odd then add in ans string, otherwise skip
    step 3: return;
    ye to lengthy h, puri string iterate krni pregi

    approach 2:
    step 1: iterate right to left
    step 2: find elemnt at i index is odd, then return substring