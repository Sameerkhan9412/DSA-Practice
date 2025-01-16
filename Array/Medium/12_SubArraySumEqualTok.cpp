class Solution {
public:
    // time complexity:O(n2)
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=0;j<nums.size();j++){
                sum+=nums[j];
                if(sum==k) count++;
            }
        }
        return count;
    }

    // optimisze approach i skiped
    
};