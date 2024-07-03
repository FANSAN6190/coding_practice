class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        int n = nums.length;
        List<List<Integer>> list = new ArrayList<>();
        Set<List<Integer>> tempSet = new HashSet<>();
        Arrays.sort(nums);
        for(int i=0;i<n;i++){
            Set<Integer> set = new HashSet<>();
            
            for(int j=i+1;j<n;j++){
                int k = -(nums[i]+nums[j]);
                if(set.contains(k)){
                    List<Integer> temp = new ArrayList<>();
                    temp.add(nums[i]);
                    temp.add(nums[j]);
                    temp.add(k);
                    tempSet.add(temp);
                }
                set.add(nums[j]);
            }
            
        }
        for(List<Integer> temp : tempSet){
            list.add(temp);
        }
        return list;
    }
}
