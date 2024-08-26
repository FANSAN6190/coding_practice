class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        Stack<Integer> stk = new Stack<>();
        Map<Integer, Integer> hash = new HashMap<>();
        int n=nums2.length;
        
        stk.push(nums2[n-1]);
        
        for(int i=n-1;i>=0;i--){
            while(!stk.isEmpty() && nums2[i]>=stk.peek()){
                stk.pop();
            }
            if(stk.isEmpty()){
                hash.put(nums2[i],-1);
                // System.out.println(nums2[i]+" "+hash.get(nums2[i]));
            }
            else{
                hash.put(nums2[i],stk.peek());
                // System.out.println(nums2[i]+" "+hash.get(nums2[i]));
            }
            stk.push(nums2[i]);
        }
        
        for(int i=0;i<nums1.length;i++){
            nums1[i]=hash.get(nums1[i]);
        }
        return nums1;
    }
}