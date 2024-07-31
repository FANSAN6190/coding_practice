class Solution {
    
    boolean BSVar(int[] row, int low, int high, int target){
        if(high<low){
            return false; 
        }
        int mid = (low+high)/2;
        if(row[mid]==target){
            return true;
        }
        else if(row[mid]>target){
            return BSVar(row,low,mid-1,target);
        }
        else{
            return BSVar(row,mid+1,high, target);
        }
    }
    public boolean searchMatrix(int[][] matrix, int target) {
        int low = 0;
        int high  = matrix.length-1;
        while(high>=low){
            int mid = (low+high)/2;
            if(matrix[mid][0]==target){
                return true;
            }
            else if(matrix[mid][0]<target && (mid==matrix.length-1 || matrix[mid+1][0]>target)){
                return BSVar(matrix[mid], 0, matrix[mid].length-1, target);
            }
            else if(matrix[mid][0]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return false;
    }
}