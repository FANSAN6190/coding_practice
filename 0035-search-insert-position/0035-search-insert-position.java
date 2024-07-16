class Solution {
    int BSVar(int[] nums, int low, int high, int target){
        if(low>high){
            return high+1;
        }
        int mid = (low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            return BSVar(nums, low, mid-1, target);
        }
        else{
            return BSVar(nums, mid+1, high, target);
        }
    }
    public int searchInsert(int[] nums, int target) {
        return BSVar(nums, 0, nums.length-1, target);
    }
}