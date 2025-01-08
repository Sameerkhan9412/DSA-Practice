// very important ques

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroPlace=-1;
        int i=0;
        while(i<nums.size()){
            if(nums[i]==0){
                zeroPlace=i;
                break;
            }
            i++;
        }
        if(zeroPlace==-1) return;
        
        for(int j=zeroPlace+1;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[j],nums[zeroPlace]);
                zeroPlace++;
            }
        }
    }
};