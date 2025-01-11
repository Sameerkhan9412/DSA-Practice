class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;

        int mid=s+(e-s)/2;
        while(s<=e){    //need to know this condition
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s=mid+1;    
            }
            else{
                e=mid-1;    //and yeh condition,mid-1 nhi krta
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }
};