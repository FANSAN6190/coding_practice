class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        int n = nums.length;
        Arrays.sort(nums);
        List<List<Integer>> fourS = new ArrayList<>(); 
        Set<List<Integer>> tempSet = new HashSet<>();
        for(int i=0; i<n; i++){
            int j=i+1;
            int k=j+1;
            while(j<k){
                k=j+1;
                int l=n-1;
                while(k<l){
                    long sum = (long)nums[i]+(long)nums[j]+(long)nums[k]+(long)nums[l];
                    if(sum<target){
                        k++;
                    }
                    else if(sum>target){
                        l--;
                    }
                    else if(sum==target){
                        List<Integer> list = new ArrayList<>();
                        list.add(nums[i]);
                        list.add(nums[j]); 
                        list.add(nums[k]);
                        list.add(nums[l]);
                        tempSet.add(list);
                        k++;
                        l--;
                    }
                }
                j++;
            }
        }
        for(List<Integer> temp: tempSet){
            fourS.add(temp);
        }
        return fourS;
    }
}
