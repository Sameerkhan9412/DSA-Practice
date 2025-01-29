class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s=1,e=*max_element(nums.begin(),nums.end()),mid;    //stl func to find max in array
        int ans=0;
        while(s<=e){
            int total=0;
            mid=s+(e-s)/2;
            for(int i=0;i<nums.size();i++){
                int mid=s+(e-s)/2;
                total+=nums[i]/mid;
                if(nums[i]%mid) total++;
            }
            if(total<=threshold){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};