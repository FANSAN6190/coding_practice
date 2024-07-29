class Solution {
    int BSVar(int[] nums, int low, int high){
        
        int mid =(low+high)/2;
        if(nums[low]<=nums[high]){
            return nums[low];
        }
        if(mid!=0 && nums[mid-1]>nums[mid]){
            return nums[mid];
        }
        if(nums[low]>nums[mid]){
            return BSVar(nums, low, mid-1);
        }
        else{
            return BSVar(nums, mid+1, high);
        }
    }
    public int findMin(int[] nums) {
        return BSVar(nums, 0, nums.length-1);
    }
}
// [7,8,9,10,0,1,2]
