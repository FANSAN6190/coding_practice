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
    public ListNode reverse(ListNode temp0, ListNode temp1, ListNode temp2){
        if(temp2==null){
            temp1.next = temp0;
            return temp1;
        }
        temp1.next = temp0;
        return reverse(temp1,temp2,temp2.next);
    }
    
    public ListNode reverseList(ListNode head) {
        if(head==null){
            return null;
        }
        else if(head.next==null){
            return head;
        }
        return reverse(null,head,head.next);
    }
}