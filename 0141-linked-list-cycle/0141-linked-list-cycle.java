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
        ListNode rabb = head;
        ListNode tort = head;
        if(head==null || head.next==null || head.next.next == null){
            return false;
        }
        else if(head.next==head || head.next.next == head){
            return true;
        }
        while(rabb!=null){
            // System.out.println(rabb.val+" "+tort.val);
            if(rabb.next==null){
                return false;
            }
            tort = tort.next;
            rabb = rabb.next.next;
            if(rabb==tort){
                return true;
            }
        }
        return false;
    }
}