// ques link:https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array

//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largest=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        return largest;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.largest(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends