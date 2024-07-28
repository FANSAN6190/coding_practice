class Solution {
    int BSVar(int[] nums, int low, int high, int target){
        if(low>high){
            return -1;
        }
        int mid = (low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[low]<=nums[mid]){
            if(nums[low]<=target && target<=nums[mid]){
                return BSVar(nums, low, mid-1, target);
            }
            else{
                return BSVar(nums, mid+1, high, target);
            }
        }
        else{
            if(nums[mid]<=target && target<=nums[high]){
                return BSVar(nums, mid+1, high, target);
            }
            else{
                return BSVar(nums, low, mid-1, target);
            }
        }
    }

    public int search(int[] nums, int target) {
        return BSVar(nums, 0, nums.length-1, target);
    }
}