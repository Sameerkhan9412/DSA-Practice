class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();

        int ansSum=0;
        for(int i=0;i<n;i++){
            ansSum+=mat[i][i]+mat[i][n-1-i];//for all diagonal element
        }
        if(n%2==0){
            return ansSum;  //if row or col size id even
        }
        else{
            // odd wala case
            ansSum=ansSum-mat[n/2][n/2];
            return ansSum;
        }
    }
};