class Solution {
    boolean BSVar(int[] row, int low, int high, int target){
        
        if(high<low){
            return false;
        }
        int mid = (low+high)/2;
        if(target==row[mid]){
            return true;
        }
        else if(target<row[mid]){
            return BSVar(row, low, mid-1, target);
        }
        else{
            return BSVar(row, mid+1, high, target);
        }
    }
    public boolean searchMatrix(int[][] matrix, int target) {
        
        for(int i=0; i<matrix.length; i++){
            if(matrix[i][0]==target || matrix[i][matrix[i].length-1]==target){
                return true;
            }
            else if(matrix[i][0]<target && matrix[i][matrix[i].length-1]>target){
                if(BSVar(matrix[i], 0, matrix[i].length-1, target)){
                    return true;
                }
            }
        }
        return false;
    }
}