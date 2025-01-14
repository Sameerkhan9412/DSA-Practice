class Solution {
public:
    // 1st way:simple nexted loop and search  :Time Complexity:O(M*N) ->it is worst case time complexity
    // time complexity:O(log(m*n))
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int start=0,end=row*col-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            int rowIndex=mid/col;
            int colIndex=mid%col;
            if(matrix[rowIndex][colIndex]==target){
                return true;
            }
            else if(matrix[rowIndex][colIndex]<target){
                start=mid+1;
            }
            else {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return false;
    }
};