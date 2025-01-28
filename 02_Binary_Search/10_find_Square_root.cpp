//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        int s=0,e=n;
        int mid;
        int ans=-1;
        if(n==1) return 1;
        while(s<e){
            mid=s+(e-s)/2;
            if(mid*mid<=n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends