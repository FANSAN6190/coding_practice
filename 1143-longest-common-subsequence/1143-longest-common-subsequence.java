class Solution {
        
    public int longestCommonSubsequence(String text1, String text2) {
        int[][] lcs = new int[text1.length()+1][text2.length()+1];
        
        for(int i=0;i<text1.length();i++){
            for(int j=0;j<text2.length();j++){
                if(text1.charAt(i)==text2.charAt(j)){
                    lcs[i+1][j+1] = 1 + lcs[i][j];
                }
                else{
                    lcs[i+1][j+1] = Math.max(lcs[i][j+1], lcs[i+1][j]);
                }
            }
        }
        return lcs[text1.length()][text2.length()];
    }
}