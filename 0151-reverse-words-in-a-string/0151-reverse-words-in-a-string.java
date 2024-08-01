class Solution {
    public String reverseWords(String s) {
        String[] str = s.replaceAll("\s+"," ").trim().split(" ");
        StringBuffer stb = new StringBuffer();
        for(int i=str.length-1;i>=0;i--){
            if(i==0)
                stb.append(str[i]);   
            else
                stb.append(str[i]+" ");

        }
        return stb.toString();
    }
}