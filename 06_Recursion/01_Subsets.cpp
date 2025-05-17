class Solution {
    public:
        void recursivecall(vector<int>&nums, vector<vector<int>> &ans,int index,vector<int> temp){
            if(index>=nums.size()){
                ans.push_back(temp);
                return;
            }
            recursivecall(nums,ans,index+1,temp);
            temp.push_back(nums[index]);
    
            recursivecall(nums,ans,index+1,temp);
        }
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> temp;
            recursivecall(nums,ans,0,temp);
            return ans;
    
        }
    };