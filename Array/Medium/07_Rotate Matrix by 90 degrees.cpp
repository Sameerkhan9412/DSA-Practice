class Solution {
public:
    void rotate(vector<vector<int>>& matrix,int size,int row){
        int s=0,e=size-1;
        while(s<=e){
            swap(matrix[row][s],matrix[row][e]);
            s++,e--;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();i++){
            rotate(matrix,matrix[0].size(),i);
        }
    }
};