/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteMiddle(ListNode head) {
        if(head.next==null){
            return null;
        }
        ListNode snail = head;
        ListNode rabb = head.next.next;
        
        while(rabb!=null){
            if(rabb.next==null){
                break;
            }
            snail = snail.next;
            rabb = rabb.next.next;
        }
        snail.next = snail.next.next;
        return head;
    }
}