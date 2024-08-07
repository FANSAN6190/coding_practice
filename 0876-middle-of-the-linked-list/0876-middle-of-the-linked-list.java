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
    public ListNode middleNode(ListNode head) {
        ListNode temp = head;
        int count=0;
        while(temp!=null){
            count++;
            temp=temp.next;
        }
        int mid = (int)Math.ceil(count/2);
        count=0;
        temp = head;
        while(temp!=null){
            if(count>=mid){
                return temp;
            }
            temp = temp.next;
            count++;
        }
        return head;
    }
}