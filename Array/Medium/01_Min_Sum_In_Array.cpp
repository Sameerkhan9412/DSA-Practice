class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(mpp.find(diff)!=mpp.end()){  //if use mpp.find(diff)!=mpp.end()->bcz
                return {mpp[diff],i};       //if any element not find in mpp,then it 
            }                               //which is equal to mpp.end()
            mpp[nums[i]]=i;
        }
        return {};
    }

};