class Solution {
    public int[][] merge(int[][] intervals) {
        int n=intervals.length;
        if(n==1){
            return intervals;
        }
        Arrays.sort(intervals, (a,b)->a[0]-b[0]);

        Stack<int[]> arr2 = new Stack<>();
        for(int i=0;i<n;i++){
            if(arr2.empty() || arr2.peek()[1]<intervals[i][0]){
                arr2.push(intervals[i]);
            }
            else {
                arr2.peek()[0] = Math.min(arr2.peek()[0], intervals[i][0]);
                arr2.peek()[1] = Math.max(arr2.peek()[1], intervals[i][1]);
            }
        }
        
        int[][] arr = new int[arr2.size()][2];
        for(int i=arr2.size()-1;i>=0;i--){
            arr[i]=arr2.pop();
        }
        return arr;   
    }
}
