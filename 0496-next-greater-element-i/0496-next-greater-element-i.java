class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        for(int i=0;i<nums1.length;i++){
            boolean flag=false;
            for(int j=0;j<nums2.length;j++){
                if(flag==false && nums1[i]==nums2[j]){
                    flag=true;
                }
                if(flag==true && nums1[i]<nums2[j]){
                    nums1[i]=nums2[j];
                    flag=false;
                }
            }
            if(flag==true)
                nums1[i]=-1;
        }
        return nums1;
    }
}