class Solution {
    public int lengthOfLongestSubstring(String s) {
        
        int maxCount=0;
        for(int i=0;i<s.length()-maxCount;i++){
            Set<Character> set = new HashSet<>();
            int count=0;
            for(int j=i;j<s.length();j++){
                if(!set.contains(s.charAt(j))){
                    set.add(s.charAt(j));
                    count++;
                }
                else{
                    break;
                }
            }
            if(maxCount<count)
                maxCount=count;
            // System.out.println(count);
        }
        return maxCount;
    }
}