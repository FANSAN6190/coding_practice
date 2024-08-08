class Solution {
    public int heightChecker(int[] heights) {
        int[] tempArr = Arrays.copyOf(heights,heights.length);
        Arrays.sort(heights);
        int count = 0;
        for(int i=0;i<tempArr.length;i++){
            // System.out.println(tempArr[i]+" "+heights[i]);
            if(tempArr[i]!=heights[i]){
                count++;
            }
        }
        return count;
    }
}