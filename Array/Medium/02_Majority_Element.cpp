class Solution {
public:

    // first approcach:using nested loop and count
    // second approach:uisng hash
    // third is given below
    int majorityElement(vector<int>& nums) {
        int majority=nums[0];
        int count=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==majority){
                count++;
            }
            else{
                count--;
                if(count==0){
                    majority=nums[i];
                    count=1;
                }
    
            }
        }
        return majority;
    }
};