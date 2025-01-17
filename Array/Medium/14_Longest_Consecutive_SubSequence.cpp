class Solution {
public:
    // not complete
    int longestConsecutive(vector<int>& nums) {//time complexity:O(n2)
        int len=1;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int count=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==x) len++;
            }
        }
    }
};

// method 2:ime compleixty:nlogn
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int lastSmaller=INT_MIN;
        int count=0;
        int longest=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1==lastSmaller){
                count++;
                lastSmaller=nums[i];

            }
            else if(lastSmaller!=nums[i]){
                count=1;
                lastSmaller=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;
    }
};

// more optimise approach i skipped