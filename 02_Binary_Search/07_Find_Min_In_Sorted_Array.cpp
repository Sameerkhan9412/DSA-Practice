class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1)  return nums[0];
        if(nums[0]<nums.back()) return nums[0];
        int ans=INT_MAX;
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]>=nums[0]){
                start=mid+1;
            }
            else{
                ans=min(ans,nums[mid]);
                end=mid-1;
            }
        }
        return ans;
    }
};