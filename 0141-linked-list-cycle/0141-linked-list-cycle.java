/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        Set<ListNode> hash = new HashSet<>();
        ListNode temp = head;
        while(temp!=null){
            if(hash.contains(temp)){
                return true;
            }
            hash.add(temp);
            temp=temp.next;
        }
        return false;
    }
}