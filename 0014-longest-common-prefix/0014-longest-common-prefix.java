class Solution {
    public String longestCommonPrefix(String[] strs) {
        StringBuffer res = new StringBuffer();
        // res.append(String.valueOf(strs[0].charAt(0)));
        for(int i=0;i<=200;i++){
            boolean flag = false;
            if(strs.length<=1){
                return strs[0];
            }
            for(int j=1;j<strs.length;j++){
                if(strs[0].length()>i && i<strs[j].length() && strs[j].charAt(i)==strs[j-1].charAt(i)){
                    flag=true;
                }
                else
                    return res.toString();
            }
            res.append(String.valueOf(strs[0].charAt(i)));
                
        }
        return "";
    }
}