class Solution {
public:
    void reverse(vector<int>& nums,int start,int end){
        while(start<=end){
            // swap(nums[start],nums[end]);
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if (nums.size() <= 1) return;  // No rotation needed for empty or single-element arrays-> ise bhi bhool jata hu
        
       // Normalize k to avoid unnecessary rotations
        k = k % nums.size();  //is condition ko bhool jata hu
        if(nums.size()<=1) return ;
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);
        // 1 2 3 4 5 6 7 
    }
};