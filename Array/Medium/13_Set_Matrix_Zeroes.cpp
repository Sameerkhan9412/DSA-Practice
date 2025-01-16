class Solution {
public:
//worst approach but thier have a problem if matirx have already -1
    void setZeroes(vector<vector<int>>& matrix) {
    //     for(int i=0;i<matrix.size();i++){
    //         for(int j=0;j<matrix[0].size();j++){
    //             if(matrix[i][j]==0){
    //                 for(int k=0;k<matrix[0].size();k++){
    //                     matrix[i][k]=-1;
    //                 }
    //                 for(int k=0;k<matrix.size();k++){
    //                     matrix[k][j]=-1;
    //                 }
    //             }
    //         }
    //     }
    //     for(int i=0;i<matrix.size();i++){
    //         for(int j=0;j<matrix[0].size();j++){
    //             if(matrix[i][j]==-1){
    //                 matrix[i][j]=0;
    //             }
    //         }
    //     }
    // }

    
    // worst case se to easy hai or acha bhi hai,time complexity: O(n*m) and space complexity =O(n)+O(m)

    class Solution {
    public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rows(matrix.size(), 0);  // Initialize with size and all values as 0
        vector<int> cols(matrix[0].size(), 0);  // Initialize with size and all values as 0

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (rows[i] == 1 || cols[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};


};