class Solution {
public:
    // kadane's algo:
    // step1: sum+=num[i]->iterate till end
    // step 2:if(sum>maxi) ,then max=sum
    // step3:if(sum<0),sum=0;
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};