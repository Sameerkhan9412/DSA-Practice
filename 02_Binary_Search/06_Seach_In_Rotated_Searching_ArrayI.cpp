//  when no duplicate exist
class Solution {
public:
    int findPivotIndex(vector<int>& nums) {
    int n = nums.size();
    int s = 0;
    int e = n - 1;
    while (s < e) {
        int mid = s + (e - s) / 2;
        if (mid < e && nums[mid] > nums[mid + 1]) 
            return mid;
        if (mid > s && nums[mid] < nums[mid - 1])
            return mid - 1;
        if (nums[s] >= nums[mid])
            e = mid - 1;
        else
            s = mid + 1;
    }
    return s; // s will be the pivot index
}

    int binarySearch(vector<int>& arr, int s, int e, int target) {
        int mid = s + (e - s) / 2;
        while (s <= e) {
            if (arr[mid] == target)
                return mid;
            if (target > arr[mid]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivotIndex = findPivotIndex(nums);
        int n = nums.size();
        int ans = -1;
        if (target >= nums[0] && target <= nums[pivotIndex]) {
            ans = binarySearch(nums, 0, pivotIndex, target);
        } else {
            ans = binarySearch(nums, pivotIndex + 1, n - 1, target);
        }
        return ans;
    }
};