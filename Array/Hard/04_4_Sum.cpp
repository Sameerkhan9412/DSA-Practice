class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       
        sort(nums.begin(), nums.end()); // Sort the array
        vector<vector<int>> ans;

        // chhoti se size k liye
         if(nums.size()<4){
            return ans;
        }
        for (int i = 0; i < nums.size() - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates for i
            for (int j = i + 1; j < nums.size() - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicates for j
                
                long long targetSum = (long long)target - nums[i] - nums[j];
                int start = j + 1, end = nums.size() - 1;
                
                while (start < end) {
                    int sum = nums[start] + nums[end];
                    if (sum == targetSum) {
                        ans.push_back({nums[i], nums[j], nums[start], nums[end]});
                        start++;
                        end--;

                        // Skip duplicates for start and end
                        while (start < end && nums[start] == nums[start - 1]) start++;
                        while (start < end && nums[end] == nums[end + 1]) end--;
                    } else if (sum > targetSum) {
                        end--;
                    } else {
                        start++;
                    }
                }
            }
        }
        return ans;
    }
};
