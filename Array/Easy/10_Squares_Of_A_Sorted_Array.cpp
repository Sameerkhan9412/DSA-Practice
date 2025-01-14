class Solution {
public:
    //not easy, do practice
    vector<int> sortedSquares(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        int pos=end;
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            nums[i]*=nums[i];
        }
        
        while(start<=end){
            if(nums[start]<=nums[end]){
                ans[pos]=nums[end];
                end--;
                pos--;
            }
            else {
                ans[pos]=nums[start];
                start++;
                pos--;
            }
        }
        return ans;
    }
};