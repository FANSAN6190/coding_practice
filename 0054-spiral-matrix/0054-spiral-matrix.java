class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int l = 0;
        int r = matrix[0].length-1;
        int t = 0;
        int b = matrix.length-1;
        int size = (r+1)*(b+1);
        ArrayList<Integer> arr = new ArrayList<Integer>();
        while(size>0){
            for(int j=l;j<=r && size>0;j++){
                arr.add(matrix[t][j]);
                size--;
            }
            t++;
            for(int j=t;j<=b && size>0;j++){
                arr.add(matrix[j][r]);
                size--;
            }
            r--;
            for(int j=r;j>=l && size>0;j--){
                arr.add(matrix[b][j]);
                size--;
            }
            b--;
            for(int j=b;j>=t && size>0;j--){
                arr.add(matrix[j][l]);
                size--;
            }
            l++;     
        }
        return arr;
    }
}
