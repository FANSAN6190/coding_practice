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
        if(head==null || head.next==null || head.next.next==null){
            return null;
        }
        ListNode fast = head;
        ListNode slow = head;
        boolean flag = false;
        while(fast!=null){
            if(flag==false){
                if(fast.next==null){
                    break;
                }
                slow = slow.next;
                fast = fast.next.next;
            }
            else{
                slow = slow.next;
                fast = fast.next;
            }
            
            if(fast==slow){
                if(flag==false){
                    if(slow==head)
                        return slow;
                    slow=head;
                    flag = true;
                }
                else{
                    return slow;
                }  
            }   
        }
        return null;
    }
}