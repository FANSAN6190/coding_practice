class Solution {
    public String removeOuterParentheses(String s) {
        char[] str = s.toCharArray();
        
        int c1=0;
        int p1=0;
        for(int i=0;i<str.length;i++){
            if(str[i]=='('){
                c1++;
            }
            else if(str[i]==')'){
                c1--;
            }
            if(c1==0){
                str[p1]=' ';
                str[i]=' ';
                p1=i+1;
            }
        }
        return String.valueOf(str).replaceAll("\\s","");
    }
}