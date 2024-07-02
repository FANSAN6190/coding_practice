class Solution {
    public int subarraySum(int[] nums, int k) {
        int cs=0;
        int count=0;
        int n = nums.length;
        HashMap<Integer, Integer> arr = new HashMap<Integer, Integer>();
        arr.put(0,1);

        for(int i=0;i<n;i++){
            cs=cs+nums[i];
            int f=(arr.get(cs-k)!=null)?arr.get(cs-k):0;
            count=count+f;
            arr.putIfAbsent(cs,0);
            arr.put(cs,arr.get(cs)+1);

        }
        return count;
    }
}