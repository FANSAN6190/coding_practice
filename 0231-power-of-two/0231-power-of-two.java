class Solution {
    public boolean isPowerOfTwo(int n) {
        while(n>0){
            if(n%2==1)
                break;
            n=n>>1;
        }
        if(n==1)
            return true;
        return false;
    }
}