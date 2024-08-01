class Solution {
    public String largestOddNumber(String num) {
        StringBuilder stb = new StringBuilder();
        boolean flag = false;
        for(int i=num.length()-1;i>=0;i--){
            if(flag==false && (num.charAt(i)-'0')%2==1){
                stb.insert(0,String.valueOf(num.charAt(i)));
                flag = true;
            }
            else if(flag==true){
                stb.insert(0,String.valueOf(num.charAt(i)));
            }
        }
        return stb.toString();
    }
}