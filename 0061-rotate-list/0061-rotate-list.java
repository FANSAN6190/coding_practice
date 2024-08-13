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
    public ListNode rotateRight(ListNode head, int k) {
        if(head==null || head.next==null || k==0){
            return head;
        }
        ListNode pivot = head;
        ListNode temp = head;
        int n=1;
        while(temp.next!=null){
            temp=temp.next;
            n++;
        }
        temp.next=pivot;
        
        int l=n-k%n-1;
        
        System.out.println(l+" "+n+" "+k);
        while(l>0){
            head=head.next;
            l--;
        }
        ListNode temp2=head;
        head=head.next;
        temp2.next=null;
        return head;
    }
}