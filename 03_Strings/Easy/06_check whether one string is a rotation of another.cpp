class Solution {
    public:
        bool rotateString(string s, string goal) {
            if(s.size()!=goal.size()) return false;
            if((s+s).contains(goal)){
                return true;
            }
            return false;
        }
    };