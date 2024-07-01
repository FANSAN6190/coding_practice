class Solution {
    public void rotate(int[][] matrix) {
        int m = matrix.length;
        int n = matrix[0].length;
        for(int i=0;i<m;i++){
            for(int j=i+1;j<n;j++){
                if(i!=j){
                    int t=matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = t;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n/2;j++){
                int t=matrix[i][j];
                matrix[i][j] = matrix[i][n-1-j];
                matrix[i][n-1-j] = t;
            }
        }
    }
}