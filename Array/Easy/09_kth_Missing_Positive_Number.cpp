class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missingCount = 0;
        int currentNumber = 1;
        int i = 0;
        
        while (i < arr.size()) {
            if (arr[i] == currentNumber) {
                i++;
            } else {
                missingCount++;
                if (missingCount == k) {
                    // Return the current number
                    return currentNumber;
                }
            }
            currentNumber++;
        }
        while(missingCount<k){
            currentNumber+=1;
            missingCount++;
        }
        
        // If we exit the loop, all remaining missing numbers are greater than the last element in arr
        // return currentNumber + (k - missingCount - 1);
        return currentNumber;
    }
};
