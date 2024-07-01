class Solution {
    public void nextPermutation(int[] nums) {
        int n = nums.length;
        
        int j;
        for(j=n-2;(j>=0 && nums[j]>=nums[j+1]);j--);
        System.out.println(j);
        if(j>=0){
            for(int k=n-1;k>j;k--){
                if(nums[j]<nums[k]){
                    int t=nums[j];
                    nums[j]=nums[k];
                    nums[k]=t;
                    break;
                }
            }
        }
        
        for(int k=j+1;k<(n+j+1)/2;k++){
            // System.out.println(k+" "+nums[k]+" "+nums[n-k+j]);
            int t=nums[k];
            nums[k]=nums[n-k+j];
            nums[n-k+j]=t;
            // System.out.println(k+" "+nums[k]+" "+nums[n-k+j]+"\n");
        }
    }
}