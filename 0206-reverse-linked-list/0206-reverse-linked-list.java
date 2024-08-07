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
    public ListNode reverseList(ListNode head) {
        if(head==null){
            return null;
        }
        else if(head.next==null){
            return head;
        }
        ListNode temp0 = null;
        ListNode temp1 = head;
        ListNode temp2 = head.next;
        
        while(temp2!=null){
            temp1.next=temp0;
            temp0=temp1;
            temp1=temp2;
            temp2=temp2.next;
        }
        temp1.next=temp0;
        return temp1;
    }
}