class Solution {
    public int minBitFlips(int start, int goal) {
        int k = start^goal;
        int count=0;
        while(k>0){
            if(k%2==1){
                count++;
            }
            k=k>>1;
        }
        return count;
    }
}