class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n = arr.size();
        int s = 0, e = n - 1;

        while (s <= e) {
            // If the subarray is already sorted, the smallest element is at 's'
            if (arr[s] <= arr[e]) return s;

            int mid = s + (e - s) / 2;

            // Check if mid is the smallest element
            int prev = (mid - 1 + n) % n;
            int next = (mid + 1) % n;

            if (arr[mid] <= arr[prev] && arr[mid] <= arr[next]) {
                return mid;
            }

            // Decide which half to continue searching
            if (arr[mid] >= arr[s]) {
                // Left half is sorted, search in the right half
                s = mid + 1;
            } else {
                // Right half is unsorted, search in the left half
                e = mid - 1;
            }
        }

        return 0; // Fallback (not rotated)
    }
};

// method 2
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int high=nums.size()-1;
        int low=0;
        int mid;

        // boundary cases
        if(high==0) return nums[0];
        else if(nums[0]!=nums[1]) return nums[0];
        else if(nums[high]!=nums[high-1]) return nums[high];

        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return nums[mid];
            }
            if(((mid%2)==0 && nums[mid]!=nums[mid-1]) ||((mid%2)==1 &&nums[mid] && nums[mid]==nums[mid-1])){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;

    }
};
