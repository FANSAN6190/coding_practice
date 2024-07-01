class Solution {
    public int[] rearrangeArray(int[] nums) {
        int[] arr = new int[nums.length];
        int p1=0,p2=0;
        boolean flag = false;
        for(int i=0;i<nums.length;i++){
            if(flag==false){
                while(nums[p1]<0 && p1<nums.length){
                    p1++;
                }
                arr[i]=nums[p1];
                p1++;
                flag = true;
            }
            else{
                while(nums[p2]>0 && p2<nums.length){
                    p2++;
                }
                arr[i]=nums[p2];
                p2++;
                flag = false;
            }
        }
        return arr;
    }
}