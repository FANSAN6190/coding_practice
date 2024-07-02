class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> pascal = new ArrayList<>();
        
        for(int i=0;i<numRows;i++){
            List<Integer> arr=new ArrayList<>();
            for(int j=0;j<i+1;j++){
                if(i<2 || j==0 || j==i){
                    arr.add(1);
                }
                else{
                    int a = pascal.get(i-1).get(j-1)+pascal.get(i-1).get(j);
                    arr.add(a);
                }
            }
            pascal.add(arr);
        }
        return pascal;
    }
}