class Solution {
    public void setZeroes(int[][] matrix) {
        int m = matrix.length;
        int n = matrix[0].length;
        ArrayList<ArrayList<Integer>> hash = new ArrayList<ArrayList<Integer>>();
        hash.add(new ArrayList<Integer>());
        hash.add(new ArrayList<Integer>());
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    hash.get(0).add(i);
                    hash.get(1).add(j);
                    count++;
                }
            }
        }
        for(int i=0;i<count;i++){
            System.out.println(hash.get(0).get(i)+" "+hash.get(1).get(i));
            for(int k=0;k<n;k++){
                matrix[hash.get(0).get(i)][k]=0;
            }
            for(int k=0;k<m;k++){
                matrix[k][hash.get(1).get(i)]=0;
            }
        }
    }
}
