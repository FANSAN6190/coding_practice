class Solution {
    public int lengthOfLongestSubstring(String s) {
        
        int maxCount=0;
        Map<Character, Integer> hash = new HashMap<>();
        int l=0;
        int r=-1;
        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            if(hash.containsKey(ch))
                if(hash.get(ch)>=l)
                    l=hash.get(ch)+1;
            r=i;
            hash.put(ch,i);
            
            if(maxCount<(r-l+1)){
                maxCount=r-l+1;
            }
            // System.out.println(l+" "+r+" "+maxCount);
        }
        return maxCount;
    }
}