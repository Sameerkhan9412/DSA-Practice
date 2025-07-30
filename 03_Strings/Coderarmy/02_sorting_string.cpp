class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10); // assuming max 9 words
        string temp;
        int count = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                int pos = temp.back() - '0';
                temp.pop_back();
                ans[pos - 1] = temp; // Fix: pos - 1
                temp = "";
                count++;
            } else {
                temp += s[i];
            }
        }

        // Process last word
        if (!temp.empty()) {
            int pos = temp.back() - '0';
            temp.pop_back();
            ans[pos - 1] = temp;
            count++;
        }

        string result;
        for (int i = 0; i < count; i++) {
            result += ans[i] + " ";
        }

        result.pop_back(); // remove trailing space
        return result;
    }
};
