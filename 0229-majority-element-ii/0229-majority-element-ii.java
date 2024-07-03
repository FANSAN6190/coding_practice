class Solution {
    public List<Integer> majorityElement(int[] nums) {
        ArrayList<Integer> arr = new ArrayList<Integer>();
        int c1=0, c2=0;
        int e1=Integer.MIN_VALUE;
        int e2=Integer.MIN_VALUE;
        int n = nums.length;
        
        for(int i=0;i<n;i++){
            if(c1==0 && e2!=nums[i]){
                c1=1;
                e1=nums[i];
            }
            else if(c2==0 && e1!=nums[i]){
                c2=1;
                e2=nums[i];
            }
            
            else if(e1==nums[i]){
                c1++;
            }
            else if(e2==nums[i]){
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0;
        c2=0;
        for(int i=0;i<n;i++){
            if(e1==nums[i]){
                c1++;
            }
            if(e2==nums[i]){
                c2++;
            }
        }
        if(c1>n/3){arr.add(e1);}
        if(c2>n/3){arr.add(e2);}
        return arr;
    }
}