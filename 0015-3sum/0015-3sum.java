class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        List<List<Integer>> list = new ArrayList<>();
        Set<List<Integer>> tempSet = new HashSet<>();

        for(int i=0;i<n-1;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else if(nums[i]+nums[j]+nums[k]>0){
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]==0){
                    List<Integer> temp = new ArrayList<Integer>();
                    temp.add(nums[i]);
                    temp.add(nums[j]);
                    temp.add(nums[k]);
                    tempSet.add(temp);
                    j++;
                    k--;
                }                
            }
        }
        for(List<Integer> temp : tempSet){
            list.add(temp);
        }
        return list;
    }
}
