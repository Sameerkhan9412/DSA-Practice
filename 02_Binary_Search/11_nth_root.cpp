//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here.
        int s = 1, e = m;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            long long num = 1;
            for (int i = 0; i < n; i++) {
                num *= mid;
                if (num > m) break; // Avoid overflow
            }
            
            if (num == m) {
                return mid; // Found the nth root
            } else if (num > m) {
                e = mid - 1; // Narrow search to smaller values
            } else {
                s = mid + 1; // Narrow search to larger values
            }
        }
        return -1; // No exact nth root found
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends