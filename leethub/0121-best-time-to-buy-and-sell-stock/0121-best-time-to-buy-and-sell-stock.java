class Solution {
    public int maxProfit(int[] prices) {
        int min=0;
        int max=0;
        int maxProf=0;
        for(int i=1;i<prices.length;i++){
            if(prices[i]<prices[min]){
                min=i;
                max=i;
            }
            if(prices[i]>prices[max]){
                max=i;
            }
            maxProf=Math.max(prices[max]-prices[min],maxProf);
        }
        return maxProf;       
    }
}