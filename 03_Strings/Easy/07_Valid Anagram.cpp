class Solution {
    public:
        bool isAnagram(string s, string t) {
            if(s.size()!=t.size()) return false;
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            for(int i=0;i<s.size();i++){
                if(s[i]!=t[i]){
                    return false;
                } 
            }
            return true;
        }
    };


    anagram:two strings are anagrams if they contain the same characters with the same frequency, but in a different order. For instance, "listen" and "silent" are anagrams because they use the same letters, just rearranged. Similarly, "triangle" and "integral" are also anagrams of each other


    approach 2: TC->O(N) and space complexity:O(1)
    class Solution {
        public:
            bool isAnagram(string s, string t) {
                int bucketArray[26]={0};
                if(s.size()!=t.size()) return false;
                for(int i=0;i<s.size();i++){
                    bucketArray[s[i]-'a']++;
                }
                for(int i=0;i<s.size();i++){
                    bucketArray[t[i]-'a']--;
                }
        
                for(int i=0;i<26;i++){
                    if(bucketArray[i]!=0) return false;
                }
                return true;
            }
        };