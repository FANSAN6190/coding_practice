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
    public ListNode detectCycle(ListNode head) {
        ListNode temp = head;
        Set<ListNode> hash = new HashSet<>();
        while(temp!=null){
            if(hash.contains(temp))
                return temp;
            hash.add(temp);
            temp=temp.next;
        }
        return null;
    }
}