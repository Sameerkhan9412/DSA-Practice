class Solution {    // code jrur krna,
    public:
        string frequencySort(string s) {
            // Step 1: Count character frequencies
            unordered_map<char, int> freq;
            for (char c : s) {
                freq[c]++;
            }
            
            // Step 2: Convert map to vector of pairs
            vector<pair<char, int>> v(freq.begin(), freq.end());
            
            // Step 3: Sort in descending order of frequency
            sort(v.begin(), v.end(), [](pair<char, int>& p1, pair<char, int>& p2) {
                return p1.second > p2.second;  // Sort by frequency descending
            });
            
            // Step 4: Build the result string
            string result;
            for (auto& p : v) {
                result.append(p.second, p.first);  // Append character 'p.first' 'p.second' times
            }
            
            return result;
        }
    };
    