class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=nums.size();
        while(s<=e){
            if(nums[mid]>=target){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};