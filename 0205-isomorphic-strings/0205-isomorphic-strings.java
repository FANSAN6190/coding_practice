class Solution {
    public boolean isIsomorphic(String s, String t) {
        Map<Character,Character> charMap1 = new HashMap<>();
        Map<Character,Character> charMap2 = new HashMap<>();
        for(int i=0;i<s.length();i++){
            charMap1.putIfAbsent(s.charAt(i),t.charAt(i));
            charMap2.putIfAbsent(t.charAt(i),s.charAt(i));
        }
        for(int i=0;i<s.length();i++){
            // System.out.println(s.charAt(i)+" "+charMap.get(s.charAt(i))+" "+t.charAt(i));
            if(charMap1.get(s.charAt(i))!=t.charAt(i) || charMap2.get(t.charAt(i))!=s.charAt(i)){
                return false;
            }        
        }
        return true;
    }
}