class Solution {
    public int[] nextGreaterElements(int[] nums) {
        int n = nums.length;
        int[] arr = new int[n];
        Stack<Integer> stk = new Stack<>();
        stk.push(nums[n-1]);
        for(int i=2*(n-1);i>=0;i--){
            while(!stk.isEmpty() && nums[i%n]>=stk.peek()){
                stk.pop();
            }
            if(i<n){
                if(stk.isEmpty()){
                    arr[i]=-1;
                } 
                else{
                    arr[i]=stk.peek();
                }
            }
            stk.push(nums[i%n]);
        }
        return arr;
    }
}