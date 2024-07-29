class Solution {
    
    boolean BSVar(int[] nums, int low, int high, int target){
        if(high<low){
            return false;
        }
        int mid = (low+high)/2;
        if(nums[mid]==target){
            return true;
        }
        
        if(nums[low]<nums[mid]){
            if(nums[low]<=target && target<=nums[mid]){
                return BSVar(nums, low, mid-1, target);
            }
            else{
                return BSVar(nums, mid+1, high, target);
            }
        }
        else if(nums[low]==nums[mid] && nums[mid]==nums[high]){
            return BSVar(nums, low+1, high-1, target);
        }
        else if(nums[low]==nums[mid]){
            return BSVar(nums, mid+1, high, target);
        }
        else if(nums[mid]==nums[high]){
            return BSVar(nums, low, mid, target);
        }
        else{
            if(mid==low){
                return BSVar(nums, mid+1, high, target);
            }
            if(nums[mid]<=target && target<=nums[high]){
                return BSVar(nums, mid+1, high, target);
            }
            else{
                return BSVar(nums, low, mid-1, target);
            }
        }
    }
    public boolean search(int[] nums, int target) {
        return BSVar(nums, 0, nums.length-1, target);
    }
}
