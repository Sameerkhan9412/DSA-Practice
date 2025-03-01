class Solution {
    public:
        bool isIsomorphic(string s, string t) {
            if(s.length() != t.length()) return false;
            unordered_map<char, char> map1, map2;
    
            for (int i = 0; i < s.length(); i++) {
                char c1 = s[i], c2 = t[i];
    
                // Check if mapping exists and is consistent
                if ((map1.count(c1) && map1[c1] != c2) || 
                    (map2.count(c2) && map2[c2] != c1)) {
                    return false;
                }
    
                // Store mapping
                map1[c1] = c2;
                map2[c2] = c1;
            }
            return true;
        }
    };

    Input: s = "egg", t = "add"
    Output: true

    Explanation:

    The strings s and t can be made identical by:

    Mapping 'e' to 'a'.
    Mapping 'g' to 'd'.

    Example 2:

Input: s = "foo", t = "bar"

Output: false

Explanation:

The strings s and t can not be made identical as 'o' needs to be mapped to both 'a' and 'r'.

Example 3:

Input: s = "paper", t = "title"

Output: true