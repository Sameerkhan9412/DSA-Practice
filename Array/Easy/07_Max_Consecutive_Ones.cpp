class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currOnes=0;
        int lastOnes=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                currOnes++;
                if(currOnes>lastOnes){  //ye condition bhul jate hai
                lastOnes=currOnes;
            }
            }
            else{
                currOnes=0;
            }
            
        }
        return lastOnes;
    }
};