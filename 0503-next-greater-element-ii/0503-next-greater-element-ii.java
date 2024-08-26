class Solution {
    public int[] nextGreaterElements(int[] nums) {
        int n = nums.length;
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            int k = i+1;
            boolean flag = false;
            for(int j=0;j<n;j++){
                if(nums[i]<nums[k%n]){
                    arr[i]=nums[k%n];
                    flag = true;
                    break;
                }
                k++;
            }
            if(flag==false)
                arr[i]=-1;
        }
        return arr;
    }
}