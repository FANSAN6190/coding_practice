class Solution {
    public int singleNumber(int[] nums) {
        int xors=0;
        for(int i=0;i<nums.length;i++){
            xors=xors^nums[i];
        }
        return xors;
    }
}