Find triplets with zero sum
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find triplets with zero sum.
    bool findTriplets(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int start=i+1,end=arr.size()-1;
            while(start<end){
                int sum=arr[i]+arr[start]+arr[end];
                if(sum==0){
                    return true;
                }
                if(sum>0){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the integer input
    while (t--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<int> arr;
        int num;
        while (ss >> num)
            arr.push_back(num);

        Solution obj;
        if (obj.findTriplets(arr))
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }

    return 0;
}

// } Driver Code Ends