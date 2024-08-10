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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode temp = head;
        int t=0;
        while(temp!=null){
            t++;
            temp=temp.next;
        }
        t=t-(n-1)-1;
        if(t==0){
            head=head.next;
        }
        else{
            ListNode temp2=head;
            while(t-1>0){
                temp2=temp2.next;
                t--;
            }
            // System.out.println(temp2.val);
            temp2.next=temp2.next.next;
        }
        return head;
    }
}