class Solution {
    public int singleNumber(int[] nums) {
        int xors=0;
        for(int i:nums){
            xors=xors^i;
        }
        return xors;
    }
}