
//bruth force method:

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);// it will store only single value
        }
        int index=0;
        for(auto it:st){
            nums[index]=it;
            index++;
        }
        return index;
    }
    // time colpexity:nlogn
    // space com:O(n)
};

// optimal-> 2 pointer approcach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[index]){
                nums[index+1]=nums[i];
                index++;
            }
        }
        return index+1;
    }
};
// t.C->O(n)
// S.C->O(1)

