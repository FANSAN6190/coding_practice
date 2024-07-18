class Solution {
    int[] BSVar(int[] nums, int low, int high, int target){
        int[] arr = {-1,-1};
        if(low>high){
            return arr;
        }
        int mid = (low+high)/2;
        if(nums[mid]==target){
            arr[1]=mid;
            while(mid>0 && nums[mid] == nums[mid-1]){
                mid = mid-1;
            }
            arr[0]=mid;
            
            arr[0]=mid;
            while(mid<(nums.length-1) && nums[mid] == nums[mid+1]){
                mid = mid+1;
            }
            arr[1]=mid;
            return arr;
        }
        else if(nums[mid]>target){
            return BSVar(nums, low, mid-1, target);
        }
        else{
            return BSVar(nums, mid+1, high, target);
        }
    }
    
    public int[] searchRange(int[] nums, int target) {
        if(nums.length==2 && nums[0]==target && nums[1]==target){
            int[] arr = {0,1};
            return arr;
        }
        return BSVar(nums, 0, nums.length-1, target);
    }
}